#include <bits/stdc++.h>

using namespace std;

long a, b;
long result = 0;

void bfs(int n){
    queue<pair<long, long>> q;
    q.push(pair<long,long>(n, 1));

    while(!q.empty()){
        long n = q.front().first;
        long count = q.front().second;
        q.pop();
        if(n == b){

            cout << count << endl;
            return;
        }
        else if(n > b){
            // pass
        }
        else{
            q.push(pair<long,long>(n*10+1, count+1));
            q.push(pair<long,long>(n*2, count+1));
        }
    }

    cout << -1 << endl;
    return;
}


int main(void){
    cin >> a >> b;
    
    bfs(a);
}