#include <bits/stdc++.h>
#define MAX 2187

using namespace std;

char arr[MAX][MAX];
int N;

'''
xywh 형식 사용
n: 할당된 박스의 사이즈(wh)
coord_i, coord_j: 할당된 박스의 좌표(xy)
'''
void painter(int n, int coord_i, int coord_j){
    if(n == 1){
        return;
    }

    int one_third = n/3;    // 할당된 박스의 사이즈를 3으로 나눠 조각의 사이즈를 구함.

    for(int i = 0; i < 3; i++){     // 조각 별로 정복
        for(int j = 0; j < 3; j++){
            
            if(i == 1 && j == 1){   // 가운데 조각이라면 공백으로 채워 줌.
                ////////// puncher //////////
                for(int _i = 0; _i < one_third; _i++){
                    for(int _j = 0; _j < one_third; _j++){
                        arr[coord_i + (one_third+_i)][coord_j + (one_third+_j)] = ' ';
                    }
                }
                ////////// puncher //////////
            }
            else{   // 가운데 외의 조각은 재귀적으로 처리.
                painter(n/3, coord_i+(i*one_third), coord_j+(j*one_third));
            }

        }
    }

}





int main(void){
    cin >> N;

    // initialize
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            arr[i][j] = '*';
        }
    }

    // processing
    painter(N, 0, 0);

    // show
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
}
