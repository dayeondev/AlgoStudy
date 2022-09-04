#include<bits/stdc++.h>

using namespace std;

int n;

int main(void){

    string str;
    getline(cin, str);

    n = stoi(str);
    

    for(int i = 0; i < n; i++){
        getline(cin, str);
        cout << i+1 << ". " << str << endl;

    }
}
