#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n;
vector<pair<int, int>> v;

bool compare(pair<int, int> a, pair<int, int> b){
    if (a.second == b.second){
        return a.first < b.first;
    }
    else{
        return a.second < b.second;
    }
}

int main(void){
    cin >> n;

    int tmp1, tmp2;
    for(int i = 0; i < n; i++){
        cin >> tmp1 >> tmp2;
        v.push_back(make_pair(tmp1, tmp2));
    }

    sort(v.begin(), v.end(), compare);

    
    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << '\n';
    }
    

}