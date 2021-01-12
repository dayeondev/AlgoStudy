#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  int arr[2002]={0, };
  cin>>n;
  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    arr[tmp+1001]++;
  }
  for(int i = 0; i < 2002; i++){
    if(arr[i]) cout << i-1001 << " ";
  }

  

  return 0;
}