#include <bits/stdc++.h>
#include <algorithm>
#include <tuple>

using namespace std;

int n;
vector<tuple<int, int, string>> v; // age, index, name

bool compare(tuple<int, int, string> a, tuple<int, int, string> b){
    if (get<0>(a) == get<0>(b)){
        return get<1>(a) < get<1>(b);
    }
    else{
        return get<0>(a) < get<0>(b);
    }
}

int main(void){
    cin >> n;

    int age;
    string name;
    for(int i = 0; i < n; i++){
        cin >> age >> name;
        v.push_back(make_tuple(age, i, name));
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; i++){
        cout << get<0>(v[i]) << " " << get<2>(v[i]) << '\n';
    }
}