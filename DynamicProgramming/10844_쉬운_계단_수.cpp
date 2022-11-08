#include<bits/stdc++.h>
#define MAX 101
using namespace std;

int n;
long dp[MAX][10];
int result = 0;

int main(void){
    cin >> n;

    dp[1][0] = 0;
    for(int i = 1; i < 9+1; i++){
        dp[1][i] = 1;
    }

    for(int i = 2; i < n+1; i++){
        for(int j = 0; j < 9+1; j++){
            if(j == 0){
                dp[i][j] = dp[i-1][1];
            }
            else if(j > 0 && j < 9){
                dp[i][j]  = dp[i-1][j-1];
                dp[i][j]  = (dp[i][j] + dp[i-1][j+1]) % 1000000000;
            }
            else{
                dp[i][j] = dp[i-1][8];
            }
        }
    }

    for(int i = 0; i < 9+1; i++){
        result = (result + dp[n][i]) % 1000000000;
    }

    cout << result << endl;

}



