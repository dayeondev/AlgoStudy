#include <bits/stdc++.h>
#define MAX 51

using namespace std;

int w, h, result;
bool arr[MAX][MAX] = {false, };
bool visited[MAX][MAX] = {false, };
int coord_x[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int coord_y[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

void initialization(bool arr[MAX][MAX]){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            arr[i][j] = false;
        }
    }
    return;
}

void bfs(pair<int,int> node){
    queue<pair<int,int>> q;
    q.push(node);
    visited[node.second][node.first];

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 8; i++){
            int new_x = x+coord_x[i];
            int new_y = y+coord_y[i];

            if((arr[new_y][new_x]&&!visited[new_y][new_x])&&((new_x>0&&new_x<=w)&&(new_y>0&&new_y<=h))){
                visited[new_y][new_x] = true;
                q.push(pair<int,int>(new_x,new_y));
            }


        }    
    }
}

int main(void){
    cin >> w >> h;
    while(!(w+h==0)){
        initialization(arr);
        initialization(visited);
        result = 0;

        int tmp;
        for(int i = 1; i < h+1; i++){
            for(int j = 1; j < w+1; j++){
                cin >> tmp;
                arr[i][j] = tmp==1?true:false;
            }
        }



        for(int i = 1; i < h+1; i++){
            for(int j = 1; j < w+1; j++){
                if(arr[i][j]&&!visited[i][j]){
                    bfs(pair<int,int>(j, i));
                    result++;
                }
            }
        }

        cout << result << endl;

        cin >> w >> h;
    }
}