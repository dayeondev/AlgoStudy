#include <iostream>
#include<algorithm>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  string input;

  while(input != "0"){
    cin >> input;

    string buffer = input;
    reverse(input.begin(), input.end());
    if(input != "0"){
      if(buffer == input){
        cout << "yes" << "\n";
      }
      else{
        cout << "no" << "\n";
      }
    }
  }
  
  

  

  return 0;
}