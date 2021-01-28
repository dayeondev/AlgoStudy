#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  int result = 0;
  int point = 1;
  int tmp;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    if(tmp == 0){
      point = 1;
    }
    else{
      result += point++;
    }
  }
  
  cout << result;

  return 0;
}