#include <iostream>
#include <string>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int t;
  string s;

  cin >> t;

  for(int i = 0; i < t; i++){
    cin >> s;
    int sum, cnt;
    sum = cnt = 0;
    for(int j = 0; j < s.length(); j++){
      if(s[j] == 'O'){
        cnt++;
      }
      else{
        cnt = 0;
      }
      sum += cnt;
    }
    cout << sum << '\n';
  }


  return 0;
}