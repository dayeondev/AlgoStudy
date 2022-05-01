#include <iostream>
#include <string>
using namespace std;

void showBoard(bool[8][8]);

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  bool answer1[8][8];
  bool answer2[8][8];
  bool board[50][50] = {0, };

  string str;

  int min = 100000;
  int score1, score2;

  int n, m;
  cin >> n >> m;


  // 답지 만들기
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      answer1[i][j] = (i % 2) == (j % 2);
      answer2[i][j] = !((i % 2) == (j % 2));
    }
  }

  // 입력받기
  for(int i = 0; i < n; i++){
    cin >> str;
    for(int j = 0; j < m; j++){
      if(str[j] == 'B'){
        board[i][j] = 1;
      }
      else{
        board[i][j] = 0;
      }
    }
  }


  // 채점하기
  for(int i = 0; i < n - 7; i++){
    for(int j = 0; j < m - 7; j++){
      score1 = 0;
      score2 = 0;

      for(int k = 0; k < 8; k++){
        for(int l = 0; l < 8; l++){
          if(!(answer1[k][l] == board[i + k][j + l])){
            score1++;
          }
          if(!(answer2[k][l] == board[i + k][j + l])){
            score2++;
          }
        }
      }
      
      if(min > score1){
        min = score1;
      }
      if(min > score2){
        min = score2;
      }

    }
  }

  cout << min;

  return 0;
}

void showBoard(bool _board[8][8]){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      cout << _board[i][j] << ' ';
    }
    cout << '\n';
  }
}


