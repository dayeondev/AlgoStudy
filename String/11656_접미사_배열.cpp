#include<bits/stdc++.h>
#include <algorithm>


using namespace std;

int n, m;
vector<string> v;

int main(void){
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        v.push_back(str.substr(i, str.length()-i));
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << '\n';
    }

}
