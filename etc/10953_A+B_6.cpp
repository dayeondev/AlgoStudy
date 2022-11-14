#include<bits/stdc++.h>

using namespace std;

int t;
int n1, n2;

int main(void){
    cin >> t;
    string str;
    for(int i = 0; i < t; i++){
        cin >> str;
        n1 = str[0]-'0';
        n2 = str[2]-'0';

        cout << n1 + n2 << '\n';
    }
}

