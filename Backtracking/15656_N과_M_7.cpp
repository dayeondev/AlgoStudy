#include<bits/stdc++.h>
#define MAX 7

using namespace std;

int n, m;
int arr[MAX];
vector<int> v;

void DFS(int depth){
    if(depth == m){
        for(int i = 0; i < m; i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i < n; i++){
        v.push_back(arr[i]);
        DFS(depth+1);
        v.pop_back();
    }
}


int main(void){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    DFS(0);
}
