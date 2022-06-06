#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int n, m;
int result = -1;
bool graph[MAX][MAX] = {false, };
bool visited[MAX] = {false, };


void dfs(int node){
    if(visited[node]){
        return;
    }

    // cout << node << " ";
    visited[node] = true;
    result++;

    for(int i = 1; i < n+1; i++){
        if (graph[node][i]){
            dfs(i);
        }
    }


    
}

int main(void){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int c1, c2;
        cin >> c1 >> c2;
        graph[c1][c2] = true;
        graph[c2][c1] = true;
    }
    
    dfs(1);
    cout << result;
}