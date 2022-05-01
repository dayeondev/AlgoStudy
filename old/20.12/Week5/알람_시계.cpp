#include <iostream>
using namespace std;

int main(){
  int h, m;
  char result;
  cin >> h;
  cin >> m;

  h = h - 1;
  m = m + 60 - 45;

  if(m > 59){
    h = h + 1;
    m = m - 60;
  }
  if(h > 23){
    h = 0;
  }
  else if(h < 0){
    h = 23;
  }

  cout << h << " " << m;

  return 0;
}