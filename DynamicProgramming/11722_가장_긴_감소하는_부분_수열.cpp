#include<bits/stdc++.h>
#define MAX 1001

using namespace std;

int n;
int nums[MAX];
int dp[MAX];
int result = 0;

int main(void){
    cin >> n;
    for(int i = n; i > 0; i--){
        cin >> nums[i];
        dp[i] = 1;
    }

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < i; j++){
            if(nums[i] > nums[j]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        result = max(result, dp[i]);
    }
    cout << result << endl;

}

