#include <bits/stdc++.h>

using namespace std;

string str;
priority_queue<int, vector<int>, less<int>> q;

int main(void){
    cin >> str;
    
    for(int i = 0; i < str.length(); i++){
        q.push(str[i] - '0');
    }
    int tmp;
    for(int i = 0; i < str.length(); i++){
        tmp = q.top();
        cout << tmp;
        q.pop();
    }
    cout << '\n';

}