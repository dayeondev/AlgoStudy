#include <iostream>
using namespace std;

int main(){
  int x, y;
  char result;
  cin >> x;
  cin >> y;

  if(x > 0 && y > 0){
    result = '1';
  }
  else if(x < 0 && y > 0){
    result = '2';
  }
  else if(x < 0 && y < 0){
    result = '3';
  }
  else if(x > 0 && y < 0){
    result = '4';
  }

  cout << result;

  return 0;
}