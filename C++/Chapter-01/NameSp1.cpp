#include <iostream>

namespace BestComImpl{
  void SimpleFunc(void){
    std::cout << "BestCom이 정의한 함수" << std::endl;
  }
}

namespace ProgComImpl{
  void SimpleFunc(void){
    std::cout << "ProgCom이 정의한 함수" << std::endl;
  }
}

int main(){
  BestComImpl::SimpleFunc(); // BestCom이 정의한 함수
  ProgComImpl::SimpleFunc(); // ProgCom이 정의한 함수
  return 0;
}