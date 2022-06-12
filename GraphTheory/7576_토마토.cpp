#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int arr[MAX][MAX] = {0, };
int new_arr[MAX][MAX] = {0, };
bool visited[MAX][MAX] = {false, };
int m, n;
int result = -1;
int coord_x[4] = {0, 0, -1, 1};
int coord_y[4] = {-1, 1, 0, 0};
queue<pair<int,int>> q, new_q;

void search(pair<int,int> node){
    int x = node.first;
    int y = node.second;
    visited[y][x] = true;
    arr[y][x] = 1;
    for(int i = 0; i < 4; i++){
        int new_x = x+coord_x[i];
        int new_y = y+coord_y[i];
        // cout << "new_x: " << new_x << "\tnew_y: "<<new_y<<endl;
        if((arr[new_y][new_x]==0&&!visited[new_y][new_x])&&((new_x>0&&new_x<=m)&&(new_y>0&&new_y<=n))){
            new_q.push(pair<int,int>(new_x,new_y));
            visited[new_y][new_x] = true;
            arr[new_y][new_x] = 1;
        }
    }
    
}


int main(void){
    cin >> m >> n;

    int tmp;
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < m+1; j++){
            cin >> tmp;
            arr[i][j] = tmp;
            if(tmp == 1){
                q.push(pair<int,int>(j, i));
            }
        }
    }

    while(!q.empty()){
        result++;
        while(!q.empty()){
            // cout << "x: " << q.front().first << "\ty: " << q.front().second << endl;
            search(q.front());
            q.pop();
        }


        q = queue<pair<int,int>>();
        while(!new_q.empty()){
            q.push(new_q.front());
            new_q.pop();
        }


    }

    // cout << endl;
    for(int i = 1; i < n+1; i++){
        // cout << endl;
        for(int j = 1; j < m+1; j++){
            // cout << arr[i][j] << " ";
            if(arr[i][j]==0){
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << result << endl;
    
}