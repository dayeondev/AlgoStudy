#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  int result = 0;
  int sliced1, sliced2;
  int tmp;

  cin >> n;

  if(n < 10){
    sliced1 = 0;
  }
  else{
    sliced1 = n / 10;
  }
  sliced2 = n % 10;
  tmp = sliced2 * 10 + (sliced1 + sliced2) % 10;
  // cout << sliced1 << ' ';
  // cout << sliced2 << '\n';
  // cout << tmp << '\n';
  result++;

  while(n != tmp){
    sliced1 = tmp / 10;
    sliced2 = tmp % 10;
    tmp = sliced2 * 10 + (sliced1 + sliced2) % 10;
    // cout << tmp << '\n';
    result++;
  }

  cout << result;

  return 0;
}