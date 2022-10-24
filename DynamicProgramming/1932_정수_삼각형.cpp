#include<bits/stdc++.h>
#define MAX 500

using namespace std;

int n;
int arr[MAX][MAX];
int dp[MAX][MAX];
bool visited[MAX][MAX];

int solve(int i, int j){
    if(i==n-1){
        return arr[i][j];
    }
    if(!visited[i+1][j]){
        dp[i+1][j] = solve(i+1,j);
        visited[i+1][j] = true;
    } 
    if(!visited[i+1][j+1]){
        dp[i+1][j+1] = solve(i+1,j+1);
        visited[i+1][j+1] = true;
    } 
    return arr[i][j] + max(dp[i+1][j], dp[i+1][j+1]);
}

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cin >> arr[i][j];
        }
    }

    cout << solve(0, 0) << '\n';
}
