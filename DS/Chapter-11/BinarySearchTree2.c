#include <stdio.h>
#include <stdlib.h>
#include "BinarySearchTree2.h"
#include "BinaryTree3.h"
#include "BinaryTree3.c"

void BSTMakeAndInit(BTreeNode ** pRoot){
  *pRoot=NULL;
}

BSTData BSTGetNodeData(BTreeNode * bst){
  return GetData(bst);
}

void BSTInsert(BTreeNode ** pRoot, BSTData data){
  BTreeNode * pNode=NULL;    // parent node
  BTreeNode * cNode=*pRoot;  // current node
  BTreeNode * nNode=NULL;    // new node

  // 새로운 노드가(새 데이터가 담긴 노드가) 추가될 위치를 찾는다.
  while(cNode!=NULL){
    if(data==GetData(cNode))
      return;  // 데이터의(키의) 중복을 허용하지 않음

    pNode=cNode;

    if(GetData(cNode)>data)
      cNode=GetLeftSubTree(cNode);
    else
      cNode=GetRightSubTree(cNode);
  }

  // pNode의 자식 노드로 추가할 새 노드의 생성
  nNode=MakeBTreeNode();  // 새 노드 생성
  SetData(nNode, data);   // 새 노드에 데이터 저장

  // pNode의 자식 노드로 새 노드를 추가
  if(pNode!=NULL){           // 새 노드가 루트 노드가 아니라면
    if(data<GetData(pNode))
      MakeLeftSubTree(pNode, nNode);
    else
      MakeRightSubTree(pNode, nNode);
  } 
  else  // 새 노드가 루트 노드라면
    *pRoot=nNode;  // pNode가 NULL이면 루트 노드에 새 노드를 추가
}

BTreeNode * BSTSearch(BTreeNode * bst, BSTData target){
  BTreeNode * cNode=bst;  // current node
  BSTData cd;             // current data

  while(cNode!=NULL){
    cd=GetData(cNode);

    if(target==cd)
      return cNode;
    else if(target<cd)
      cNode=GetLeftSubTree(cNode);
    else
      cNode=GetRightSubTree(cNode);
  }

  return NULL;  // 탐색 대상이 저장되어 있지 않음
}

BTreeNode * BSTRemove(BTreeNode ** pRoot, BSTData target){
  // 삭제 대상이 루트 노드인 경우를 별도로 고려해야 한다.
  BTreeNode * pVRoot=MakeBTreeNode();  // 가상 루트 노드
  BTreeNode * pNode=pVRoot;            // parent node
  BTreeNode * cNode=*pRoot;            // current node
  BTreeNode * dNode;                   // delete node

  // 루트 노드를 pVRoot가 가리키는 노드의 오른쪽 자식이 되게 한다.
  ChangeRightSubTree(pVRoot, *pRoot);

  // 삭제 대상을 탐색
  while(cNode!=NULL && GetData(cNode)!=target){
    pNode=cNode;

    if(target<GetData(cNode))
      cNode=GetLeftSubTree(cNode);
    else
      cNode=GetRightSubTree(cNode);
  }

  // 삭제 대상이 존재하지 않는다면
  if(cNode==NULL)
    return NULL;

  dNode=cNode;  // 삭제 대상을 dNode가 가리키게 한다.

  // 첫 번째 경우: 단말 노드 삭제
  if(GetLeftSubTree(dNode)==NULL && GetRightSubTree(dNode)==NULL){
    if(GetLeftSubTree(pNode)==dNode)
      RemoveLeftSubTree(pNode);
    else
      RemoveRightSubTree(pNode);
  }
  // 두 번째 경우: 자식이 하나인 노드 삭제
  else if(GetLeftSubTree(dNode)==NULL || GetRightSubTree(dNode)==NULL){
    BTreeNode * dcNode;

    if(GetLeftSubTree(dNode)!=NULL)
      dcNode=GetLeftSubTree(dNode);
    else
      dcNode=GetRightSubTree(dNode);

    if(GetLeftSubTree(pNode)==dNode)
      ChangeLeftSubTree(pNode, dcNode);
    else
      ChangeRightSubTree(pNode, dcNode);
  }
  // 세 번째 경우: 자식이 두 개인 노드 삭제
  else{
    BTreeNode * mNode=dNode->right;  // 대체 노드 가리킴
    BTreeNode * mpNode=dNode;        // 대체 노드의 부모 노드 가리킴
    int delData;

    // 삭제 대상의 대체 노드를 찾는다.
    while(GetLeftSubTree(mNode)!=NULL){
      mpNode=mNode;
      mNode=GetLeftSubTree(mNode);
    }

    // 대체 노드에 저장된 값을 삭제할 노드에 대입한다.
    delData=GetData(dNode);  // 대입 전 데이터 백업
    SetData(dNode, GetData(mNode));  // 대입

    // 대체 노드의 부모 노드와 자식 노드를 연결한다.
    if(GetLeftSubTree(mpNode)==mNode)
      ChangeLeftSubTree(mpNode, GetRightSubTree(mNode));
    else
      ChangeRightSubTree(mpNode, GetRightSubTree(mNode));

    dNode=mNode;
    SetData(dNode, delData);  // 백업 데이터 복원
  }

  // 삭제된 노드가 루트 노드인 경우에 대한 추가적인 처리
  if(GetRightSubTree(pVRoot)!=*pRoot)
    *pRoot=GetRightSubTree(pVRoot);  // 루트 노드가 변경됨
  free(pVRoot);  // 가상 루트 노드의 소멸
  return dNode;
}

void ShowIntData(int data){
  printf("%d ", data);
}

void BSTShowAll(BTreeNode * bst){
  InorderTraverse(bst, ShowIntData);
}