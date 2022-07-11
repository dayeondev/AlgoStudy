#include <bits/stdc++.h>
#include <stack>

using namespace std;

string str, result;



int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while(true){
        stack<int> s;
        getline(cin, str);
        if(str == "."){
            break;
        }

        result = "yes";
        for(int i = 0; i < str.length(); i++){
            if (str[i] == '('){
                s.push(str[i]);
            }
            else if (str[i] == ')'){
                if(s.empty()){
                    result = "no";
                    break;
                }
                else if(s.top() == '('){
                    s.pop();
                }
                else{
                    result = "no";
                    break;
                }
            }
            else if (str[i] == '['){
                s.push(str[i]);
            }
            else if (str[i] == ']'){
                if(s.empty()){
                    result = "no";
                    break;
                }
                else if(s.top() == '['){
                    s.pop();
                }
                else{
                    result = "no";
                    break;
                }
            }
            else{
                // pass
            }
        }
        if(!s.empty()){
            result = "no";
        }
        cout << result << '\n';
    }
    
}