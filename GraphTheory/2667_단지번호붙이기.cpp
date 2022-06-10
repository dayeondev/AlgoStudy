#include <bits/stdc++.h>
#define MAX 26

using namespace std;

int n;
bool arr[MAX][MAX] = {false, };
bool visited[MAX][MAX] = {false, };

int dir_x[4] = {0, 0, -1, 1};
int dir_y[4] = {-1, 1, 0, 0};
vector<int> results;



int bfs(pair<int,int> node){
    int result = 1;
    queue<pair<int,int>> q;
    q.push(node);
    visited[node.second][node.first] = true;
    // cout << "BFS called." <<endl;
    // cout << "new_y: " <<node.second << "\tnew_x: " <<node.first<<endl<<endl;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int new_x = x+dir_x[i];
            int new_y = y+dir_y[i];
            // cout << "new_y: " <<new_y << "\tnew_x: " <<new_x<<endl;
            if((arr[new_y][new_x]&&!visited[new_y][new_x])&&((new_x>0&&new_x<=n)&&(new_y>0&&new_y<=n))){
                // cout << "OK!" <<endl;
                q.push(pair<int,int>(new_x,new_y));
                visited[new_y][new_x] = true;
                result++;
            }
        }
        // cout << "is queue empty? " << q.empty() << endl;
    }
    return result;

}

int main(void){
    cin >> n;

    for(int i = 1; i < n+1; i++){
        string str;
        cin >> str;
        for(int j = 0; j < str.length(); j++){
            if (str[j]=='1') arr[i][j+1] = true;
        }
    }

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            // cout <<arr[i][j]<<endl;
            if(!visited[i][j]){
                if(arr[i][j]){
                    // cout << "arr["<<i<<"]["<< j <<"]: "<<arr[i][j]<<endl;
                    int tmp = bfs(pair<int,int>(j, i));
                    // cout << tmp << endl;
                    results.push_back(tmp);
                }
                else{
                    visited[i][j]=true;
                }
            }
            else{
                // pass
            }
        }
    }
    
    sort(results.begin(), results.end());

    cout << results.size() << endl;
    for(int i = 0; i < results.size(); i++){
        cout << results[i] << endl;
    }
}