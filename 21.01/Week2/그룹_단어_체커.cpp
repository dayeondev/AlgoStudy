#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  int is_called[26];
  int before, now;
  int result = 0;
  string str;
  

  cin >> n;

  for(int i = 0; i < n; i++){
    bool is_skipped = false;
    before = ' ';
    cin >> str;

    for(int j = 0; j < 26; j++){
      is_called[j] = 0;
    }

    for(int j = 0; j < str.length(); j++){
      // cout << str[j] << "\n";
      now = str[j];
      if(j != 0 && is_called[now - 'a'] && before != now){
        // cout << before << ", " << now << "\n";
        // cout << is_called['a' - now] << "\n";
        // cout << is_called['a' - now] << ", " << before << ", " << now << "\n";
        // cout << "SKIPPED!\n";
        is_skipped = true;
        break; //이미 틀렸다는 판단이 들면 out
      }
      // cout << "ISCALLED " << is_called[now - 'a'] << "\n";
      is_called[now - 'a'] = is_called[now - 'a'] + 1;
      before = now;
    }

    // cout << result << '\n';
    if(is_skipped){
      continue;
    }
    result = result + 1;

  }
  cout << result;

  return 0;
}