#include <bits/stdc++.h>
#include <stack>

using namespace std;

int n, result = 0;
stack<int> s;

int main(void){
    
    cin >> n;

    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(tmp == 0){
            s.pop();
        }
        else{
            s.push(tmp);
        }
    }

    while(!s.empty()){
        result += s.top();
        s.pop();
    }    
    cout << result << '\n';
}