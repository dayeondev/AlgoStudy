#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int arr[100000];

void Solution(int n, int key){
  int start = 0;
  int end = n - 1;
  int mid;

  while(end-start >= 0){
    mid = (start + end)/2;
    if(arr[mid] == key){
      // cout << "1\n";
      printf("1\n");
      return;
    }
    else if(arr[mid] > key){
      end = mid - 1;
    }
    else{
      start = mid + 1;
    }
  }

  // cout << "0\n";
  printf("0\n");
  return;
}

int main(){
  
  int n;
  int m;
  int tmp;

  // cin >> n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    // cin >> arr[i];
    scanf("%d", &arr[i]);
  }
  sort(arr, arr + n);

  // cin >> m;
  scanf("%d", &m);

  for(int i = 0; i < m; i++){
    // cin >> tmp;
    scanf("%d", &tmp);
    Solution(n, tmp);
  }


  return 0;
}