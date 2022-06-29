#include <bits/stdc++.h>
#define MAX 300

using namespace std;

int t, l;
int arr[MAX][MAX];
bool visited[MAX][MAX];
pair<int,int> source, target;
int coord_x[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int coord_y[8] = {2, 1, -1, -2, -2, -1, 1, 2};

void bfs(pair<int, int> node){
    queue<pair<int,int>> q;
    q.push(node);

    visited[node.second][node.first] = true;
    

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        // cout << "x: " << x << ", y: " << y << endl;
        if(x == target.first && y == target.second){
            cout << arr[y][x] << endl;
            return;
        }
        
        for(int i = 0; i < 8; i++){
            int new_x = x + coord_x[i];
            int new_y = y + coord_y[i];
            

            if((arr[new_y][new_x]==0&&!visited[new_y][new_x])&&((new_x>=0&&new_x<l)&&(new_y>=0&&new_y<l))){
                visited[new_y][new_x] = true;
                arr[new_y][new_x] = arr[y][x] + 1;
                // cout << "arr[" << new_y << "][" << new_x << "]: " << arr[new_y][new_x] << endl;
                q.push(pair<int,int>(new_x, new_y));
            }
        }
    }
}

int main(void){
    cin >> t;

    while(t > 0){

        for(int i = 0; i < MAX; i++){
            for(int j = 0; j < MAX; j++){
                arr[i][j] = 0;
                visited[i][j] = false;
            }
        }

        cin >> l;
        cin >> source.first >> source.second;
        cin >> target.first >> target.second;

        bfs(source);

        t--;
    }
}

