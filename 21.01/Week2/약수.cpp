#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int num;
  int measures[50] = {0, };
  int max = 0;
  int min = 1000001;


  cin >> num;

  for(int i = 0; i < num; i++){
    cin >> measures[i];
  }

  for(int i = 0; i < num; i++){
    if(measures[i] > max){
      max = measures[i];
    }
    if(measures[i] < min){
      min = measures[i];
    }
  }
  // cout << min << ", " << max << "\n";
  cout << min * max;


  // int a, b;

  // while(cin >> a >> b){
  //   cout << a + b << '\n';
  // }
  
  return 0;
}