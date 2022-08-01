#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int cnt = 0.0;
map<string, float> m;
vector<pair<string, float>> v;

int main(void){
    string line;
    while(getline(cin, line)){
        if(line.empty()){
            break;
        }
        if(m.find(line) == m.end()){
            m.insert({line, 1.0});
        }
        else{
            m[line]+= 1.0;
        }
        cnt += 1.0;
    }


    for(auto iter:m){
        v.push_back(make_pair(iter.first, iter.second));
    }

    sort(v.begin(), v.end());
    
    float tmp;
    cout << fixed;
    cout.precision(4);
    for(auto iter:v){
        // cout << iter.second << endl;
        tmp = (float)iter.second / (float)cnt * 100;
        // // cout << result << endl;
        cout << iter.first << " " << tmp << '\n';
    }
}
