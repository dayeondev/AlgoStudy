#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n;
vector<int> v;

int result = 0;


int main(void){
    cin >> n;

    int tmp;
    for(int i = 0; i < n*2; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    result = v[0] + v[n*2-1];
    for(int i = 1; i < n; i++){
        if (result > v[i] + v[n*2-1-i]){
            result = v[i] + v[n*2-1-i];
        }
    }

    cout << result << endl;

}