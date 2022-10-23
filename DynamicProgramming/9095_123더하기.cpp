#include <bits/stdc++.h>
#define MAX 11

using namespace std;

int t, n;
int maximum;
int dp[MAX];

vector<int> nums;

int main(void){
    cin >> t;

    int tmp;
    cin >> tmp;
    nums.push_back(tmp);
    maximum = tmp;
    for(int i = 1; i < t; i++){
        cin >> tmp;
        nums.push_back(tmp);
        maximum = max(maximum, tmp);
    }

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i < maximum+1; i++){
        dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
    }

    for(int i = 0; i < t; i++){
        cout << dp[nums[i]] << '\n';
    }


}

