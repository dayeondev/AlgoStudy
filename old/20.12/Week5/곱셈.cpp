#include<iostream>

int main(){
  int A, B, n1, n2, n3, result1, result2, result3, result4;

  std::cin >> A;
  std::cin >> B;
  n1 = B % 10;
  n2 = B % 100 / 10;
  n3 = B / 100;
  result1 = A * n1;
  result2 = A * n2;
  result3 = A * n3;
  result4 = result3 * 100 + result2 * 10 + result1;
  std::cout << result1 << std::endl;
  std::cout << result2 << std::endl;
  std::cout << result3 << std::endl;
  std::cout << result4 << std::endl;
}