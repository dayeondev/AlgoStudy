#include<bits/stdc++.h>
#define MAX 1001
#define MOD_NUM 10007

using namespace std;

int n;
int dp[MAX];

int main(void){
    cin >> n;
    dp[1] = 1;
    dp[2] = 3;

    for(int i = 3; i < n+1; i++){
        dp[i] = ((dp[i-2]*2)%MOD_NUM + dp[i-1]) % MOD_NUM;
    }

    cout << dp[n] << endl;
}

