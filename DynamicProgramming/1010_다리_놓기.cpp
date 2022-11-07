#include<bits/stdc++.h>
#define MAX 31

using namespace std;

int t;
int n, m;
vector<pair<int, int>> nums;
int dp[MAX][MAX];
int maximum = 0;

int main(void){
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        nums.push_back({n,m});
        maximum = max(maximum, m);
    }

    for(int i = 1; i < maximum+1; i++){
        dp[1][i] = i;
        dp[i][i] = 1;
    }
    for(int i = 3; i < maximum+1; i++){
        for(int j = 2; j < i; j++){
            dp[j][i] = dp[j][i-1] + dp[j-1][i-1];
        }
    }
    for(auto item:nums){
        cout << dp[item.first][item.second] << endl;
    }

}

