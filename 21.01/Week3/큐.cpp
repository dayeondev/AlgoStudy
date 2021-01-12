#include <iostream>
#include <string>
using namespace std;

int arr[10000] = {0, };
int flag = 0;
int front_flag = 0;

void push(int n){
  arr[flag] = n;
  flag++;
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

void pop(){
  if(isEmpty()){
    cout << "-1\n";
    return;
  }
  cout << arr[front_flag++] << "\n";
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
    if(str == "push"){
      int tmp;
      cin >> tmp;
      push(tmp);
    }
    else if(str=="pop"){
      pop();
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