#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  int sum = 0;
  int max = -100;
  int tmp;
  double result;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> tmp;
    if(max < tmp){
      max = tmp;
    }
    sum += tmp;
  }

  result = (double)sum / (double)max * 100.0 / (double)n;
  
  cout << result;

  return 0;
}