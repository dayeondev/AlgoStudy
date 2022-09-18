#include<bits/stdc++.h>
#define MAX 49
#define LOTTO 6

using namespace std;

int n;
int arr[MAX];
bool visited[MAX];
string line;
vector<int> v;


void DFS(int depth){
    if(depth == LOTTO){
        for(int i = 0; i < LOTTO; i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i < n; i++){
        if(visited[i]){
            // pass
        }
        else if(depth!=0 && v[depth-1] > arr[i]){
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

    while (true)
    {
        cin >> n;
        if(n == 0){
            break;
        }
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            visited[i] = false;
        }


        DFS(0);

        cout << '\n';
    }
     
}
