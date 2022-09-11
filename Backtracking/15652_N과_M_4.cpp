#include<bits/stdc++.h>
#define MAX 8

using namespace std;

int n, m;
int arr[MAX];
vector<int> v;



void DFS(int depth){

    if(depth == m){
        // 출력
        for(int i = 0; i < m; i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i < n; i++){
        if(depth!=0 && v[depth-1] > arr[i]){
            // pass
        }
        else{
            v.push_back(arr[i]);
            DFS(depth+1);

            v.pop_back();
        }
    }
}

int main(void){

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }
    
    DFS(0);
}
