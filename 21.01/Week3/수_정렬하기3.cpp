#include <iostream>
// #include <cstdio>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  int arr[10001] = {0, };
  cin >> n;
  // scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    // scanf("%d", &tmp);
    arr[tmp]++;
  }
  for(int i = 0; i < 10001; i++){
    for(int j = 0; j < arr[i]; j++){
      cout << i << "\n";
      // printf("%d\n", i);
    }
  }


  return 0;
}