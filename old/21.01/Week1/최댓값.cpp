#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int arr_size = 9;
  int arr[arr_size];
  int max = -100;
  int max_index;

  for(int i = 0; i < arr_size; i++){
    cin >> arr[i];
    if(max < arr[i]){
      max = arr[i];
      max_index = i;
    }
    else{
    }
  }

  cout << arr[max_index] << '\n' << max_index + 1;

  return 0;
}