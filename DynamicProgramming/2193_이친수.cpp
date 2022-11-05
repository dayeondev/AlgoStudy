#include<bits/stdc++.h>
#define MAX 91

using namespace std;

int n;
long dp[MAX];

int main(void){
    cin >> n;

    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3; i < n+1; i++){
        dp[i] = dp[i-2] + dp[i-1];
    }
    cout << dp[n] << endl;
}

