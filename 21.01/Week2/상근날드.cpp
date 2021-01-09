#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int input[5];
  int minB = 2000;
  int minD = 2000;
  for(int i = 0; i < 5; i++){
    cin >> input[i];
  }
  for(int i = 0; i < 3; i++){
    if(minB > input[i]){
      minB = input[i];
    }
  }

  for(int i = 3; i < 5; i++){
    if(minD > input[i]){
      minD = input[i];
    }
  }
  cout << minB + minD - 50;
  return 0;
}