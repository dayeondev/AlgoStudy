#include<bits/stdc++.h>

using namespace std;

int n;

int main(void){
    cin >> n;

    string str;
    for(int i = 1; i < n+1; i++){
        str = "";
        for(int j = 0; j < n-i; j++){
            str.append(" ");
        }
        for(int j = 0; j < i; j++){
            str.append("*");
        }
        cout << str << endl;
    }
    for(int i = n-1; i > -1; i--){
        str = "";
        for(int j = 0; j < n-i; j++){
            str.append(" ");
        }
        for(int j = 0; j < i; j++){
            str.append("*");
        }
        cout << str << endl;
    }
}
