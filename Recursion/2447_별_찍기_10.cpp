#include <bits/stdc++.h>
#define MAX 2187

using namespace std;

char arr[MAX][MAX];
int N;


void painter(int n, int coord_i, int coord_j){
    if(n == 1){
        return;
    }

    int one_third = n/3;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            
            if(i == 1 && j == 1){
                ////////// puncher //////////
                for(int _i = 0; _i < one_third; _i++){
                    for(int _j = 0; _j < one_third; _j++){
                        arr[coord_i + (one_third+_i)][coord_j + (one_third+_j)] = ' ';
                    }
                }
                ////////// puncher //////////
            }
            else{
                painter(n/3, coord_i+(i*one_third), coord_j+(j*one_third));
            }

        }
    }

}





int main(void){
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            arr[i][j] = '*';
        }
    }

    painter(N, 0, 0);


    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
}
