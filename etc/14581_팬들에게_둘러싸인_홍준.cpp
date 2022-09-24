#include<bits/stdc++.h>

using namespace std;

string name;

int main(void){
    cin >> name;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i==1&&j==1){
                cout << ":" << name << ":";
                continue;
            }
            cout << ":fan:";
        }
        cout << '\n';
    }
}
