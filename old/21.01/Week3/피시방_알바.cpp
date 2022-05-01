#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  int nums[101] = {0, };
  int tmp;
  int result = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    nums[tmp]++;
  }

  for(int i = 0; i < 101; i++){
    if(nums[i] > 1){
      result += nums[i] - 1;
    }
  }

  cout << result;

  return 0;
}