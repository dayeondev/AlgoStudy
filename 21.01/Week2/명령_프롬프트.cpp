#include <iostream>
#include <string>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  string result;
  string tmp;
  int result_length;

  cin >> n;
  cin >> result;

  result_length = result.length();

  for(int i = 0; i < n - 1; i++){
    
    cin >> tmp;

    for(int j = 0; j < result_length; j++){
      if(result[j] != tmp[j]){
        result[j] = '?';
      }
    }
    
  }
  cout << result << "\n";
  

  return 0;
}