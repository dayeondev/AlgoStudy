#include <iostream>
using namespace std;



int main(){
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;


  if(b >= c){
    cout << -1;
    return 0;
  }


  int result = a/(c-b)+1;

  cout << result;
  result++;

  return 0;
}
