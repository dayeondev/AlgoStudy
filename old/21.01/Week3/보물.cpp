#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  // int n;
  // int arr1[51];
  // int arr2[51];
  // bool check[51] = {false, };
  // int result = 0;
  
  // cin >> n;
  // for(int i = 0; i < n; i++){
  //   cin >> arr1[i];
  // }
  // for(int i = 0; i < n; i++){
  //   cin >> arr2[i];
  // }
  
  // sort(arr1, arr1 + n);
  
  // for(int i = 0; i < n; i++){
  //   int index, max = 0;
    
  //   for(int j = 0; j < n; j++){
  //     if(!check[j] && max < arr2[j]){
  //       max = arr2[j];
  //       index = j;
  //     }
  //   }
  //   check[index] = true;
  //   // cout << arr1[i] << ", " << arr2[index] << "\n";
  //   result += arr1[i] * arr2[index];

  // }
  // cout << result;

  int n;
  int arr1[50];
  int arr2[50];
  int result = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> arr1[i];
  }
  for(int i = 0; i < n; i++){
    cin >> arr2[i];
  }
  sort(arr1,arr1 + n);
  sort(arr2, arr2 + n);

  for(int i = 0; i < n; i++){
    // cout << arr1[i] << ", " << arr2[n - i - 1] << '\n';
    result += arr1[i] * arr2[n - i - 1];
  }
  cout << result;

  return 0;
}