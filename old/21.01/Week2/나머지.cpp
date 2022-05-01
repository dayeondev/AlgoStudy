#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int arr[42] = {0, };
  int tmp;
  int result = 0;
  for(int i = 0; i < 10; i++){
    cin >> tmp;
    tmp = tmp % 42;
    arr[tmp]++;
  }

  for(int i = 0; i < 42; i++){
    if(arr[i]){
      result++;
    }
  }

  cout << result;
  

  return 0;
}