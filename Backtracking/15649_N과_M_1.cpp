#include<bits/stdc++.h>
#define MAX 8

using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX];
vector<int> v;



void DFS(int cnt){

    if(cnt == m){
        // 출력
        for(int i = 0; i < m; i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i < n; i++){
        if(visited[i]){
            // pass
        }
        else{
            v.push_back(arr[i]);
            visited[i] = true;
            
            DFS(cnt+1);

            v.pop_back();
            visited[i] = false;
        }
    }
}

int main(void){

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
        visited[i] = false;
    }
    
    DFS(0);
}
