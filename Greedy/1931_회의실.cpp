#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<long, long>> v;

bool compare(pair<long, long> a, pair<long, long> b){
    if (a.first < b.first){
        return true;
    }
    else if (a.first == b.first){
        if (a.second < b.second){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int main(void){
    cin >> n;
    long start, end;
    for (int i = 0; i < n; i++){
        cin >> start >> end;
        v.push_back(pair<long, long>(end, start));
    }
    sort(v.begin(), v.end(), compare);

    int result = 1;
    int now_start = v[0].second, now_end = v[0].first;
    for(int i = 1; i < n; i++){
        if(now_end <= v[i].second){
            now_end = v[i].first;
            result++;
        }
        else{
            continue;
        }
    }
    cout << result;

}