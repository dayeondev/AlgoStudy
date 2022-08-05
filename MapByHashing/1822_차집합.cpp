#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int a, b, cnt = 0;
map<int, bool> m;

int main(void){
    cin >> a >> b;

    int num;
    for(int i = 0; i < a; i++){
        cin >> num;
        m.insert({num, true});
    }
    for(int i = 0; i < b; i++){
        cin >> num;
        if(m.find(num) == m.end()){
            // pass
        }
        else{
            m[num] = false;
            cnt++;
        }
    }
    cout << m.size()-cnt << '\n';
    for(auto iter:m){
        if(iter.second){
            cout << iter.first << ' ';
        }
    }
}

