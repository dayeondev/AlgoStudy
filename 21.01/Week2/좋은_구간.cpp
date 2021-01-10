#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int arr[50] = {0, };
  int l;
  int n;
  int min = 1;
  int max;
  int count = 0;

  cin >> l;

  for(int i = 0; i < l; i++){
    cin >> arr[i];
  }
  cin >> n;
  
  sort(arr, arr + l);

  if(arr[0] > n){ //같거나 크면 괜찬은데 작은 경우..
    // cout << "0";

    // for(int i = 1; i < n; i++){
    //   count++;
    // }

    for(int i = 1; i <= n; i++){
      for(int j = n; j < arr[0]; j++){
        count++;
      }
    }
    count--;

    cout << count;

    return 0;
  }

  

  for(int i = 0; i < l; i++){
    if(arr[i] == n){
      cout << "0";
      return 0;
    }
    if(arr[i] > n){
      min = arr[i-1];
      max = arr[i];
      break;
    }
  }

  // cout << min << ", " << max;
  
  for(int i = min + 1; i <= n; i++){
    for(int j = n; j < max; j++){
      // cout << "[" << i << ", " << j << "], ";
      count++;
    }
  }
  // cout << "\n";
  count--;
  cout << count;

  return 0;
}