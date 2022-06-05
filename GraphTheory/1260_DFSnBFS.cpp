#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

vector<int> graph[1001];
bool visited[1001] = {false, };

void dfs(int x){
    if (visited[x]){
        return;
    }
    cout << x << " ";
    visited[x] = true;
    for(int i = 0; i < graph[x].size(); i++){
        dfs(graph[x][i]);
    }
    return;
}

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){

        int x = q.front();
        q.pop();
        cout << x << " ";
        for(int i = 0; i < graph[x].size(); i++){
            int y = graph[x][i];
            if (!visited[y]){
                visited[y] = true;
                q.push(y);
            }
        }
    }

}


int main(void){
    int n, m, v;
    cin >> n >> m >> v;
    int n1, n2;
    for(int i = 0; i < m; i++){
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }

    for(int i = 1; i < n+1; i++){
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(v);

    for(int i = 0; i < n+1; i++){
        visited[i] = false;
    }
    cout << endl;
    bfs(v);



} 