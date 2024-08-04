#include <stdio.h>
#include "BinaryTree3.h"
#include "AVLRebalance.h"

int GetHeight(BTreeNode * bst){
  int leftH, rightH;

  if(bst==NULL)
    return 0;

  leftH=GetHeight(GetLeftSubTree(bst));
  rightH=GetHeight(GetRightSubTree(bst));

  // 큰 값의 높이 반환
  if(leftH>rightH)
    return leftH+1;
  else
    return rightH+1;
}

int GetHeightDiff(BTreeNode * bst){
  int lsh, rsh;

  if(bst==NULL)
    return 0;

  lsh=GetHeight(GetLeftSubTree(bst));
  rsh=GetHeight(GetRightSubTree(bst));

  return lsh-rsh;  // 균형 인수 계산 결과
}

BTreeNode * RotateLL(BTreeNode * bst){
  BTreeNode * pNode;  // parent node
  BTreeNode * cNode;  // child node

  // 노드의 교환을 위한 포인터 설정
  pNode=bst;
  cNode=GetLeftSubTree(pNode);

  // 회전
  ChangeLeftSubTree(pNode, GetRightSubTree(cNode));
  ChangeRightSubTree(cNode, pNode);

  return cNode;  // 새로운 루트 노드 주소 반환
}

BTreeNode * RotateRR(BTreeNode * bst){
  BTreeNode * pNode;  // parent node
  BTreeNode * cNode;  // child node

  // 노드의 교환을 위한 포인터 설정
  pNode=bst;
  cNode=GetRightSubTree(pNode);

  // 회전
  ChangeRightSubTree(pNode, GetLeftSubTree(cNode));
  ChangeLeftSubTree(cNode, pNode);

  return cNode;  // 새로운 루트 노드 주소 반환
}

BTreeNode * RotateLR(BTreeNode * bst){
  BTreeNode * pNode;  // parent node
  BTreeNode * cNode;  // child node

  // 노드의 교환을 위한 포인터 설정
  pNode=bst;
  cNode=GetLeftSubTree(pNode);

  // 회전
  ChangeLeftSubTree(pNode, RotateRR(cNode));  // 부분적 RR 회전

  return RotateLL(pNode);  // LL 회전
}

BTreeNode * RotateRL(BTreeNode * bst){
  BTreeNode * pNode;  // parent node
  BTreeNode * cNode;  // child node

  // 노드의 교환을 위한 포인터 설정
  pNode=bst;
  cNode=GetRightSubTree(pNode);

  // 회전
  ChangeRightSubTree(pNode, RotateLL(cNode));  // 부분적 LL 회전
  return RotateRR(pNode);  // RR 회전
}

BTreeNode * Rebalance(BTreeNode ** pRoot){
  int hDiff=GetHeightDiff(*pRoot);  // 균형 인수 계산

  if(hDiff>1){  // 균형 인수가 2 이상이면 LL / LR
    if(GetHeightDiff(GetLeftSubTree(*pRoot))>0)
      *pRoot=RotateLL(*pRoot);
    else
      *pRoot=RotateLR(*pRoot);
  }

  if(hDiff<-1){  // 균형 인수가 2 이하이면 RR / RL
    if(GetHeightDiff(GetRightSubTree(*pRoot))<0)
      *pRoot=RotateRR(*pRoot);
    else
      *pRoot=RotateRL(*pRoot);
  }

  return *pRoot;
}