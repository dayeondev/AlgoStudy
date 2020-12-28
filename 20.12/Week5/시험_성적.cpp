#include <iostream>
using namespace std;

int main(){
  int score;
  char result;
  cin >> score;
  if(score > 100 || score < 60){
    result = 'F';
  }
  else if(score > 89){
    result = 'A';
  }
  else if(score > 79){
    result = 'B';
  }
  else if(score > 69){
    result = 'C';
  }
  else if(score > 59){
    result = 'D';
  }
  cout << result;


  return 0;
}