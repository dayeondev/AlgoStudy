#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int a, b, c;

  cin >> a >> b >> c;
  long result = a * b * c;
  int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  while(result > 0){
    arr[result % 10]++;
    result /= 10;
  }

  for(int i = 0; i < 10; i++){
    cout << arr[i] << '\n';
  }

  return 0;
}