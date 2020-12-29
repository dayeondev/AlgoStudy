#include<iostream>
using namespace std;

int main(){
  int T;
  int A, B;
  
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> A;
    cin >> B;
    cout << A + B << '\n';
  }
  return 0;
}