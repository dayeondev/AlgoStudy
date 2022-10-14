#include<bits/stdc++.h>

using namespace std;

string str;
int main(void){
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        cout << str[i];
        if((i+1)%10==0){
            cout << '\n';
        }
    }
}