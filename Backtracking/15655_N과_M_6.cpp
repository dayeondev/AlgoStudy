#include<bits/stdc++.h>
#define MAX 8
using namespace std;

int n, m;
int arr[MAX];
int visited[MAX];
vector<int> v;

void DFS(int depth){
    if (depth == m){
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i < n; i++){
        if(visited[i]){
            // pass
        }
        else if(depth!=0&&v[depth-1] > arr[i]){
            // pass
        }
        else{
            visited[i] = true;
            v.push_back(arr[i]);
            DFS(depth+1);
            visited[i] = false;
            v.pop_back();

        }
    }
}

int main(void){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        visited[i] = false;
    }
    sort(arr, arr+n);

    DFS(0);
}
