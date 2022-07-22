#include <bits/stdc++.h>

using namespace std;

int n;
map<long long, int> m;

int main(void){
    cin >> n;

    long long tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(m.find(tmp) == m.end()){
            m.insert({tmp, 1});
        }
        else{
            m[tmp]++;
        }
    }
    long long result = tmp;
    int _max = m[tmp];
    for(auto iter:m){
        if(_max == iter.second){
            if(result > iter.first){
                result = iter.first;
            }
        }
        if(_max < iter.second){
            _max = iter.second;
            result = iter.first;
        }
    }
    cout << result << '\n';
}
