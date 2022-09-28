#include<bits/stdc++.h>
#define MAX 8

using namespace std;

int n;
int arr[MAX];
bool visited[MAX];

vector<int> v;

void DFS(int depth){
    if(depth == n){
        for(int i = 0; i < n; i++){
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
            visited[i] = true;
            v.push_back(arr[i]);
            DFS(depth+1);
            v.pop_back();
            visited[i] = false;
        }
    }
}

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        arr[i] = i+1;
        visited[i] = false;
    }
    DFS(0);
}
