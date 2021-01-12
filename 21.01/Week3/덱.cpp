#include <iostream>
#include <string>
using namespace std;

int arr[20000] = {0, };
int flag = 10000;
int front_flag = 10000;

void push_front(int n){
  arr[--front_flag] = n;
  return;
}

void push_back(int n){
  arr[flag++] = n;
  return;
}

bool isEmpty(){
  if(flag - front_flag == 0){
    return true;
  }
  return false;
}

void empty(){
  if(flag - front_flag == 0){
    cout << "1\n";
    return;
  }
  cout << "0\n";
  return;
}

void pop_front(){
  if(isEmpty()){
    cout << "-1\n";
    return;
  }
  cout << arr[front_flag++] << "\n";
  return;
}

void pop_back(){
  if(isEmpty()){
    cout << "-1\n";
    return;
  }
  cout << arr[--flag] << "\n";
  return;
}

void size(){
  cout << flag - front_flag << "\n";
  return;
}

void front(){
  if(isEmpty()){
    cout << "-1\n";
    return;
  }
  cout << arr[front_flag] << "\n";
  return;
}

void back(){
  if(isEmpty()){
    cout << "-1\n";
    return;
  }
  cout << arr[flag - 1] << "\n";
  return;
}

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  string str;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> str;
    if(str == "push_front"){
      int tmp;
      cin >> tmp;
      push_front(tmp);
    }
    else if(str == "push_back"){
      int tmp;
      cin >> tmp;
      push_back(tmp);
    }
    else if(str=="pop_front"){
      pop_front();
    }
    else if(str=="pop_back"){
      pop_back();
    }
    else if(str=="size"){
      size();
    }
    else if(str=="empty"){
      empty();
    }
    else if(str=="front"){
      front();
    }
    else{
      back();
    }
  }
  
  

  return 0;
}