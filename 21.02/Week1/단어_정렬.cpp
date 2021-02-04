#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string str1, string str2){
  if(str1.size()==str2.size()){
    return str1 < str2;
  }
  else{
    return str1.size() < str2.size();
  }
}


int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  vector<string> strs;
  string tmp;
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> tmp;
    strs.push_back(tmp);
  }

  sort(strs.begin(), strs.end(), compare);
  tmp = "";

  for(int i = 0; i < n; i++){
    if(tmp == strs[i]){
      continue;
    }
    cout << strs[i] << '\n';
    tmp = strs[i];
  }
  
  

  return 0;
}