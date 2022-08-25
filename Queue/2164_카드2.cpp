#include<bits/stdc++.h>

using namespace std;

int n;
queue<int> q;


int main(void){
    
    cin >> n;

    for(int i = 1; i < n+1; i++){
        q.push(i);
    }

    int tmp;
    bool dump = true;
    while (q.size() > 1)
    {
        if(dump){
            q.pop();
            dump = false;
        }
        else{
            tmp = q.front();
            q.pop();
            q.push(tmp);

            dump = true;
        }
    }
    cout << q.front();
}
