#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n, m;
map<string, int> _map;
vector<string> v;

int main(void){
    cin >> n >> m;

    string tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        _map.insert({tmp, 1});
    }
    for(int i = 0; i < m; i++){
        cin >> tmp;
        if(_map.find(tmp) == _map.end()){
            // pass
        }
        else{
            v.push_back(tmp);
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for(auto iter:v){
        cout << iter << '\n';
    }

}
