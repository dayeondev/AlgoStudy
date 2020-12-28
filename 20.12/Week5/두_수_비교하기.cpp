#include<iostream>
using namespace std;

int main(){
  int n1, n2;
  const char *result = new char[2];
  cin >> n1;
  cin >> n2;

  if(n1 > n2){
    result = ">";
  }
  else if(n1 < n2){
    result = "<";
  }
  else{
    result = "==";
  }
  
  cout << result;
  
  

  return 0;
}