#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int n, k;
int visited[MAX] = {false, };

void bfs(int node){
    queue<pair<int,int>> q;
    // int dist = x > k ? x - k : k - x;
    q.push(pair<int,int>(node, 0));
    visited[node] = true;
    
    while(!q.empty()){
        int x = q.front().first;
        int count = q.front().second;
        q.pop();
        // int new_dist = x > k ? x - k : k - x;

        if(x == k){
            cout << count << endl;
            return;
        }
        else if(x > -1 && x < MAX){
            int new_x[3] = {x - 1, x + 1, x * 2};
            for(int i = 0; i < 3; i++){
                if((new_x[i] > -1 && new_x[i] < MAX)&&!visited[new_x[i]]){
                    visited[new_x[i]] = true;
                    q.push(pair<int,int>(new_x[i], count+1));
                }
            }
        }

        else{
            // pass
        }
        
    }
    cout << 10/0 << endl;

}

int main(void){
    cin >> n >> k;

    bfs(n);
}

