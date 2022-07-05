#include <bits/stdc++.h>
#include <queue>

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> q;

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;

    int tmp;

    for(int j = 0; j < n; j++){
        cin >>tmp;
        q.push(tmp);
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >>tmp;
            if(q.top() < tmp){
                q.pop();
                q.push(tmp);
            }
        }
    }

    
    cout << q.top() << '\n';
}
