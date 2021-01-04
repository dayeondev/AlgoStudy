#include <iostream>
#include <string>
using namespace std;

int checkBoard(bool board[8][8]);

int main(){
  // cin.tie(NULL);
  // ios_base::sync_with_stdio(false);

  int n, m;
  string str;
  
  cin >> n >> m;
  // cout << n << m;

  bool board[n][m];

  for(int i = 0; i < n; i++){
    if(i == 7){
      cout <<"before cin";
    }
    cin >> str;
    if(i == 7){
      cout <<"after cin";
    }
    for(int j = 0; j < m; j++){
      if(str[j] == 'B'){
        board[i][j] = 1;
      }
      else{
        board[i][j] = 0;
      }
      // cout << str[j];
    }
    // cout << i;
    if(i == 6){
      // cout <<"!!!!!!!!!!!";
    }
  }
  cout << "done";

  bool chess_board[8][8];
  int result[n - 7][m - 7];

  for(int i = 0; i < n - 7; i++){
    for(int j = 0; j < m - 7; j++){
      //보드 설정
      for(int k = 0; k < 8; i++){
        for(int l = 0; l < 8; l++){
          chess_board[k][l] = board[i+k][j+l];
        }
      }
      result[i][j] = checkBoard(chess_board);
      cout << result[i][j];
    }
  }

  int min = 100;
  for(int i = 0; i < n-7; i++){
    for(int j = 0; j < m-7; j++){
      if(result[i][j] < min){
        cout << result[j][j];
        min = result[i][j];
      }
    }
  }
  cout << min;
  











  
  // int n, m;
  // string str;
  // int num_of_black = 0, num_of_white = 0;
  // int max;
  // bool is_odd;
  // int result = 0;

  // cin >> n >> m;

  // if(n % 2 == 0 || m % 2 == 0){
  //   is_odd = 0;
  // }
  // else{
  //   is_odd = 1;
  // }

  // max = n * m / 2 + is_odd;

  // cout << max << "\n";

  // for(int i = 0; i < n; i++){
  //   cin >> str;
  //   for(int j = 0; j < m; j++){
  //     if(str[j] == 'B'){
  //       num_of_black++;
  //     }
  //     else{
  //       num_of_white++;
  //     }
  //   }
  // }

  // cout << num_of_black << ", " << num_of_white << "\n";
  
  // int n1, n2;

  // if(num_of_black > num_of_white){
  //   n1 = num_of_black;
  //   n2 = num_of_white;
  // }
  // else{
  //   n1 = num_of_white;
  //   n2 = num_of_black;
  // }

  // n1 -= max;
  // n2 -= (max - is_odd);

  // if(n1 < 0){
  //   result = result - n1;
  // }
  // if(n2 < 0){
  //   result = result - n2;
  // }
  // cout << n1 << ", " << n2 << '\n';

  // cout << result;




  return 0;
}

int checkBoard(bool board[8][8]){

  int result = 0;

  int num_of_black = 0, num_of_white = 0;

  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      if(board[i][j]){
        num_of_black++;
      }
      else{
        num_of_white++;
      }
    }
  }
  
  num_of_black - 32;
  num_of_white - 32;

  if(num_of_black < 0){
    result = result - num_of_black;
  }
  if(num_of_white < 0){
    result = result - num_of_white;
  }


  return result;
}