#include<bits/stdc++.h>

using namespace std;

int t;
string str;

bool Checker(string _str){
    if(_str.size() == 1){
        return true;
    }
    // cout << _str << endl;
    stack<int> s;
    int center = _str.length()/2;
    for(int i = 0; i < _str.length(); i++){
        if(i == center){
            // pass
        }
        else if(i < center){
            s.push(_str[i]);
        }
        else{
            if(s.top() == _str[i]){
                return false;
            }
            else{
                s.pop();
            }
        }
    }
    return Checker(_str.substr(0, center));
}

int main(void){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> t;

    for(int i = 0; i < t; i++){
        str = "";
        cin >> str;

        if (Checker(str)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
