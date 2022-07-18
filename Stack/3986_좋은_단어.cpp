#include <bits/stdc++.h>
#include <stack>

using namespace std;

int n, result = 0;
stack<char> s;
string tmp;

int main(void){
    cin >> n;
    
    while(n > 0){

        cin >> tmp;

        s.push(tmp[0]);

        for(int i = 1; i < tmp.length(); i++){
        
            if(!s.empty() && s.top() == tmp[i]){
                s.pop();
            }
            else{
                s.push(tmp[i]);
            }
        }


        if(s.empty()){
            result++;
        }

        while(!s.empty()){
            s.pop();
        }

        n--;
    }
    cout << result << '\n';
}

