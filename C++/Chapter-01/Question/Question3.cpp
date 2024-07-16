#include <iostream>

int main(){
  int num;
  std::cout << "Enter a number: ";
  std::cin >> num;
  for(int i = 1 ; i<=9; i++){
    std::cout << num << " * " << i << " = " << num*i << std::endl;
  }
  return 0;
}