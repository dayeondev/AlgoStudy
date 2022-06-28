#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int n;
vector<pair<int,int>> v;

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    else{
        return a.first < b.first;
    }
    
}

int main(void){
    cin >> n;
    int n1, n2;
    for(int i = 0; i < n; i++){
        cin >> n1 >> n2;
        v.push_back(pair<int,int>(n1, n2));
    }
    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << '\n';
    }
}