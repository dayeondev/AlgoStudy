#include <bits/stdc++.h>

using namespace std;

int n, k;
queue<int> q;
vector<int> v;

int main(void){
    cin >> n >> k;

    for(int i = 1; i < n+1; i++){
        q.push(i);
    }

    int tmp;
    while (!q.empty()){
        
        for(int i = 0; i < k-1; i++){
            tmp = q.front();
            q.pop();
            q.push(tmp);
        }

        v.push_back(q.front());
        q.pop();

    }
    if(n == 1){
        cout << '<' << v[0] << '>' << '\n';
        return 0;
    }
    cout << '<' << v[0];
    for(int i = 1; i < v.size(); i++){
        cout << ", " << v[i];
    }
    cout << '>' << '\n';
    
}
