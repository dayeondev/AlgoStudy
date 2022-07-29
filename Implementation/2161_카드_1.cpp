#include <bits/stdc++.h>

using namespace std;

int n;
bool flag = true;
queue<int> q;

int main(void){
    cin >> n;
    for(int i = 1; i < n + 1; i++){
        q.push(i);
    }

    while(!q.empty()){

        if(flag){
            cout << q.front() << " ";
            q.pop();
            flag = false;
        }
        else{
            q.push(q.front());
            q.pop();
            flag = true;
        }

    }

}
