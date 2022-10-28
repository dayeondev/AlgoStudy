#include<bits/stdc++.h>
#include<algorithm>
#define MAX 41

using namespace std;

int t, maximum = 0;
vector<int> nums;

int dp_fib[MAX];
pair<int, int> dp[MAX];
bool visited[MAX];

int fib(int n){
    if(n==0){
        visited[n] = true;
        dp[n] = {1, 0};
        dp_fib[n] = 0;
        return 0;
    }
    if(n==1){
        visited[n] = true;
        dp[n] = {0, 1};
        dp_fib[n] = 1;
        return 1;
    }
    if(!visited[n]){
        dp_fib[n] = fib(n-1) + fib(n-2);
        dp[n] = {dp[n-1].first + dp[n-2].first, dp[n-1].second + dp[n-2].second};
        visited[n] = true;
    }
    return dp_fib[n];

}

int main(void){
    cin >> t;

    int tmp;
    for(int i = 0; i < t; i++){
        cin >> tmp;
        nums.push_back(tmp);
        maximum = max(maximum, nums[i]);

        visited[i] = false;
    }

    fib(maximum);
    
    for(int i = 0; i < t; i++){
        cout << dp[nums[i]].first << " " << dp[nums[i]].second << "\n";
    }

}
