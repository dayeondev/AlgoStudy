#include <iostream>
#include <stack>

using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  string str;
  stack<char> str_left, str_right;

  cin >> str;
  cin >> n;

  for(auto &x:str){
    str_left.push(x);
  }

  while(n--){
    char command;
    cin >> command;

    if(command == 'L'){
      if(!str_left.empty()){
        str_right.push(str_left.top());
        str_left.pop();
      }
    }
    else if(command == 'D'){
      if(!str_right.empty()){
        str_left.push(str_right.top());
        str_right.pop();
      }
    }
    else if(command == 'B'){
      if(!str_left.empty()){
        str_left.pop();
      }
    }
    else{
      char x;
      cin >> x;
      str_left.push(x);
    }
  }

  while(!str_left.empty()){
    str_right.push(str_left.top());
    str_left.pop();
  }

  while(!str_right.empty()){
    cout << str_right.top();
    str_right.pop();
  }
  return 0;
}