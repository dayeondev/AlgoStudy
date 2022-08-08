#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int n;
unordered_map<string, int> m;
vector<pair<int, string>> v;

bool compare(pair<int, string> a, pair<int, string> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    else{
        return a.first < b.first;
    }
}

int main(void){
    cin >> n;
    
    string word;
    for(int i = 0; i < n; i++){
        cin >> word;
        if(m.find(word) == m.end()){
            m.insert({word, 1});
        }
        else{
            m[word]++;
        }
    }

    for(auto iter:m){
        v.push_back(make_pair(iter.second, iter.first));
    }

    sort(v.begin(), v.end(), compare);

    cout << v[v.size()-1].second << " " << v[v.size()-1].first << '\n';
}
