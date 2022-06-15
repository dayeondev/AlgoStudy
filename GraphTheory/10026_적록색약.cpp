#include <bits/stdc++.h>
#define MAX 101

using namespace std;

char arr[MAX][MAX] = {'0', };
bool visited[MAX][MAX] = {false, };
int result1 = 0, result2 = 0;
int coord_x[4] = {0, 0, -1, 1};
int coord_y[4] = {-1, 1, 0, 0};
int n;

void bfs(pair<int,int> node, char color){
    queue<pair<int,int>> q;
    q.push(node);
    if(arr[node.second][node.first] == 'R'){
        arr[node.second][node.first] = 'G';
    }

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int new_x = x + coord_x[i];
            int new_y = y + coord_y[i];
            if((arr[new_y][new_x]==color&&!visited[new_y][new_x])&&((new_x>0&&new_x<=n)&&(new_y>0&&new_y<=n))){
                if(arr[new_y][new_x] == 'R'){
                    arr[new_y][new_x] = 'G';
                }
                visited[new_y][new_x] = true;
                q.push(pair<int,int>(new_x,new_y));
            }
        }
    }

}

int main(void){
    cin >> n;

    string str;
    for(int i = 1; i < n+1; i++){
        cin >> str;
        for(int j = 1; j < n+1; j++){
            arr[i][j] = str[j-1];
        }
    }

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            if(!visited[i][j]){
                visited[i][j] = true;
                bfs(pair<int,int>(j,i),arr[i][j]);
                // cout << "i: " << i << ",\tj: " << j << endl;
                result1++;
            }
        }
    }

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            visited[i][j] = false;
        }
    }

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            if(!visited[i][j]){
                visited[i][j] = true;
                bfs(pair<int,int>(j,i),arr[i][j]);
                // cout << "i: " << i << ",\tj: " << j << ",\tcolor: " << arr[i][j] << endl;
                result2++;
            }
        }
    }


    cout << result1 << " " << result2 << endl;
}