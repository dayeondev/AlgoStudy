#include <bits/stdc++.h>

using namespace std;


int n, _max = -1;
map<string, int> m;
string result;

int main(void){
    cin >> n;

    string tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(m.find(tmp) == m.end()){
            m.insert({tmp, 1});
        }
        else{
            m[tmp]++;
        }
    }

    for(auto iter : m){
        if(_max < iter.second){
            result = iter.first;
            _max = iter.second;
        }
        else{
            // pass
        }
    }
    cout << result << '\n';

}