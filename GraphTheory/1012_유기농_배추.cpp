#include <bits/stdc++.h>
#define MAX 51

using namespace std;

bool arr[MAX][MAX] = {false, };
bool visited[MAX][MAX] = {false, };
int coord_x[4] = {0, 0, -1, 1};
int coord_y[4] = {-1, 1, 0, 0};
int t, m, n, k;
int result = 0;


void bfs(pair<int,int> node){
    queue<pair<int,int>> q;
    q.push(node);
    visited[node.second][node.first] = true;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int new_x = x+coord_x[i];
            int new_y = y+coord_y[i];
            if((arr[new_y][new_x]&&!visited[new_y][new_x])&&((new_x > 0 && new_x <= m)&&(new_y > 0 && new_y <= n))){
                visited[new_y][new_x] = true;
                q.push(pair<int,int>(new_x,new_y));
            }
        }
    }
}


int main(void){
    cin >> t;

    while(t!=0){
        result = 0;
        cin >> m >> n >> k;

        int n1, n2;
        for(int i = 0; i < k; i++){
            cin >> n1 >> n2;
            arr[n2+1][n1+1] = true;
        }

        for(int i = 1; i < n+1; i++){     // n: y
            for(int j = 1; j < m+1; j++){ // m: x
                if(arr[i][j]){
                    if(!visited[i][j]){
                        bfs(pair<int,int>(j, i));
                        result++;
                    } 
                }
                else{
                    // pass
                }
            }
        }

        for(int i = 0; i < MAX; i++){
            for(int j = 0; j < MAX; j++){
                arr[i][j] = false;
                visited[i][j] = false;
            }
        }

        t--;

        cout << result << endl;
    }



}