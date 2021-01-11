#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  int arr[1000];

  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  sort(arr, arr+n);

  for(int i = 0; i < n; i ++){
    cout << arr[i] << "\n";
  }
  

  return 0;
}