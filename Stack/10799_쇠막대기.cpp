#include <bits/stdc++.h>
#include <stack>

using namespace std;

stack<char> s;
string str;
int pipes = 1, result = 0;
char p;

int main(void){
    cin >> str;
    s.push(str[0]);
    for(int i = 1; i < str.length(); i++){
        p = str[i-1];

        if(str[i] == '('){
            pipes += 1;
            s.push(str[i]);
        }
        else{
            if(s.top() == '(' && p == '('){
                // laser time
                // cout << "BBB" << endl;
                pipes -= 1;
                result += pipes;
            }
            else{
                // cout << "CCC" << endl;
                pipes -= 1;
                result += 1;
            }
            s.pop();

        }
    }
    cout << result << '\n';
}