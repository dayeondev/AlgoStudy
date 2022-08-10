#include <bits/stdc++.h>
#define N_MAX 1001

using namespace std;

int n, m;
bool arr[N_MAX][N_MAX] = {0, };
bool visited[N_MAX] = {0, };
int result = 0;

void bfs(int node){
    queue<int> q;
    q.push(node);

    visited[node] = true;

    while(!q.empty()){
        int i = q.front();
        q.pop();
        for(int j = 1; j < n+1; j++){
            if(arr[i][j] && !visited[j]){
                visited[j] = true;
                q.push(j);
            }
        }
    }
}


int main(void){
    cin >> n >> m;

    int n1, n2;
    for(int i = 0; i < m; i++){
        cin >> n1 >> n2;
        arr[n1][n2] = true;
        arr[n2][n1] = true;
    }

    for(int i = 1; i < n+1; i++){
        if(visited[i]){
            // pass
        }
        else{
            bfs(i);

            result++;
        }
    }

    cout << result;

}