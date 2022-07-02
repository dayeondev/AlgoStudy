#include<bits/stdc++.h>
#include<queue>

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> q;

int main(void){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> n;

    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(tmp == 0){
            if(q.empty()){
                cout << 0 << '\n';
            }
            else{
                cout << q.top() << '\n';
                q.pop();
            }
        }
        else{
            q.push(tmp);
        }
    }
}
