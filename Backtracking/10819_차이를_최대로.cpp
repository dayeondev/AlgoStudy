#include<bits/stdc++.h>
#define MAX 8

using namespace std;

int n;
int arr[MAX];
bool visited[MAX];
vector<int> v;

int maximum = -1000000000;

void DFS(int depth){
    if(depth == n){
        int tmp = 0;
        for(int i = 0; i < n-1; i++){
            tmp += abs(v[i]-v[i+1]);
        }
        if(maximum < tmp){
            maximum = tmp;
        }
    }

    for(int i = 0; i < n; i++){
        if(visited[i]){
            // pass
        }
        else{
            v.push_back(arr[i]);
            visited[i] = true;
            DFS(depth+1);
            visited[i] = false;
            v.pop_back();
        }
    }
}

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        visited[i] = false;
    }

    DFS(0);

    cout << maximum << endl;
}
