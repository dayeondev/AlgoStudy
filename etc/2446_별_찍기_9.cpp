#include<bits/stdc++.h>

using namespace std;

int n;

int main(void){
    cin >> n;

    string str;
    for(int i = 0; i < n; i++){
        str = "";
        for(int j = 0; j < i; j++){
            str.append(" ");
        }
        str.append("*");
        for(int j = 0; j < n-i-1; j++){
            str.append("**");
        }
        cout << str << '\n';
    }
    for(int i = n-2; i > -1; i--){
        str = "";
        for(int j = 0; j < i; j++){
            str.append(" ");
        }
        str.append("*");
        for(int j = 0; j < n-i-1; j++){
            str.append("**");
        }
        cout << str << '\n';
    }
}
