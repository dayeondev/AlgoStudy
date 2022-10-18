#include <bits/stdc++.h>

using namespace std;

string str;
// char cstr[500];


int main(void){
    getline(cin, str);
    while(str != "END"){
        for(int i = str.length()-1; i > 0-1; i--){
            cout << str[i];
        }
        cout << '\n';

        getline(cin, str);
    }
}
