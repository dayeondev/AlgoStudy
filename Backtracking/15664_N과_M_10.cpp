#include<bits/stdc++.h>
#define N_MAX 8
#define MAX 10001

using namespace std;

int n, m;
int arr[N_MAX];
bool visited[N_MAX];
vector<int> v;

void DFS(int depth){
    if(depth == m){
        for(int i = 0; i < m; i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
        return;
    }

    int prev = 0;
    for(int i = 0; i < n; i++){
        if(visited[i]){
            // pass
        }
        else if(prev == arr[i]){
            // pass
        }
        else if(depth!=0 && v[depth-1] > arr[i]){
            // pass
        }
        else{
            prev = arr[i];
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
