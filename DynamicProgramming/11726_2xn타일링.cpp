#include<bits/stdc++.h>
#define MAX 1000

using namespace std;

int n;
int dp[MAX];



int main(void){
    cin >> n;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    for(int i = 4; i < n+1; i++){
        dp[i] = (dp[i-2] + dp[i-1]) % 10007;
    }
    cout << dp[n] << endl;
}
