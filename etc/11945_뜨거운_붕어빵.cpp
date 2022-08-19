#include<bits/stdc++.h>

using namespace std;

int n, m;
string str;

int main(void){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> str;
        for(int i = str.length()-1; i > -1; i--){
            cout << str[i];
        }
        cout << '\n';
    }
}
