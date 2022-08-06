#include<bits/stdc++.h>
#include<string>

using namespace std;

int s, e, q, cnt = 0;
unordered_map<string, bool> m;

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string _s, _e, _q;
    cin >> _s >> _e >> _q;

    s = stoi(_s.substr(0, 2))*60 + stoi(_s.substr(3, 5));
    e = stoi(_e.substr(0, 2))*60 + stoi(_e.substr(3, 5));
    q = stoi(_q.substr(0, 2))*60 + stoi(_q.substr(3, 5));
    
    string _t, id;
    int t;
    while(!cin.eof()){
        cin >> _t >> id;

        t = stoi(_t.substr(0, 2))*60 + stoi(_t.substr(3, 5));

        if(t <= s){
            if(m.find(id) == m.end()){
                m.insert({id, true});
            }
            else{
                // pass
            }
        }
        else if(e <= t && t <= q){
            if(m[id]){
                cnt++;
                m[id] = false;
            }
        }
        else{
            // pass
        }
    }
    cout << cnt << '\n';
}


