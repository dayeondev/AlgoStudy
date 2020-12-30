#include<iostream>
using namespace std;


int main(){
  int num;
  int result = 0;

  cin >> num;
  num++;

  for(int i = 1; i < num; i++){
    result += i;
  }
  cout << result;
  return 0;
}