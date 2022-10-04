#include<bits/stdc++.h>
#define MAX 6

using namespace std;

int n, n_len;
string str;
int arr[MAX];
bool visited[MAX];
vector<int> v;

int minimum = 1000000;

void DFS(int depth){
    if(depth == n_len){
        int tmp = 0;
        for(int i = 0; i < n_len; i++){
            tmp += v[i] * pow(10, i);
        }
        if(minimum > tmp && tmp > n){
            minimum = tmp;
        }
        return;
    }
    for(int i = 0; i < n_len; i++){
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
    cin >> str;
    n = stoi(str);
    n_len = str.length();
    for(int i = 0; i < n_len; i++){
        arr[i] = str[i] - '0';
        visited[i] = false;
    }

    DFS(0);
    if(minimum == 1000000){
        minimum = 0;
    }
    cout << minimum << endl;


}