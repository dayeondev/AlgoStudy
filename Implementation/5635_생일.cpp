#include<bits/stdc++.h>

using namespace std;


bool compare(pair<tuple<int, int, int>, string> a, pair<tuple<int, int, int>, string> b){
    if(get<2>(a.first) == get<2>(b.first)){
        if(get<1>(a.first) == get<1>(b.first)){
            return get<0>(a.first) < get<0>(b.first);
        }
        else{
            return get<1>(a.first) < get<1>(b.first);
        }
    }
    else{
        return get<2>(a.first) < get<2>(b.first);
    }
}

int n;
vector<pair<tuple<int, int, int>, string>> v;


int main(void){
    cin >> n;

    string name;
    int d, m, y;
    for(int i = 0; i < n; i++){
        cin >> name >> d >> m >> y;

        v.push_back(make_pair(make_tuple(d, m, y), name));
        // cout << "0: " << get<0>(v[i].first) << ", 1: " << get<1>(v[i].first) << ", 2: " << get<2>(v[i].first) << ", name: " << v[i].second << '\n';
    }

    sort(v.begin(), v.end(), compare);

    cout << v[v.size()-1].second << '\n' << v[0].second << '\n';

}
