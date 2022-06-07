#include <bits/stdc++.h>
#define MAX 101

using namespace std;


int w, h, result = 0;
int arr[MAX][MAX] = {0, };
int trace[MAX][MAX] = {0, };
bool visited[MAX][MAX] = {false, };

int coord_x[4] = {0, 0, -1, 1};
int coord_y[4] = {1, -1, 0, 0};

void bfs(pair<int,int> coord){
    queue<pair<int,int>> q;
    q.push(coord);
    visited[coord.second][coord.first] = true;
    trace[coord.second][coord.first] += 1;

    while(!q.empty()){

        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        // cout << "y: " << y << "\tx: " << x << endl;
        
        for(int i = 0; i < 4; i++){
            int new_x = x+coord_x[i];
            int new_y = y+coord_y[i];
            // cout << "new_y: " << new_y << "\tnew_x: " << new_x << endl;
            // cout << "!visited[new_y][new_x]: " << !visited[new_y][new_x] << endl;
            // cout << "arr[new_y][new_x]" << arr[new_y][new_x] << endl;
            // cout << (((new_x > 0 && new_x <= w) && (new_y > 0 && new_y <= h))&&(!visited[new_y][new_x]&&arr[new_y][new_x])) << endl << endl;
            if(((new_x > 0 && new_x <= w) && (new_y > 0 && new_y <= h))&&(!visited[new_y][new_x]&&arr[new_y][new_x])){
                q.push(pair<int,int>(new_x,new_y));
                // cout << "q.push(pair<int,int>("<<new_y<<","<<new_x<<"))" << endl;
                trace[new_y][new_x] += trace[y][x] + 1;
                visited[new_y][new_x] = true;
                if(new_y == h && x+coord_x[i] == w){
                    cout << trace[new_y][new_x] << endl;
                }
                // cout << "trace["<< new_y<<"]["<<new_x<<"]: " << trace[new_y][new_x] << endl;
            }
        }
    }
}

int main(void){
    cin >> h >> w;

    for(int i = 1; i < h+1; i++){
        string tmp;
        cin >> tmp;
        for(int j = 1; j < w+1; j++){
            arr[i][j] = tmp[j-1] - '0';
        }
    }

    bfs(pair<int,int>(1,1));
    // cout << result;
    

}