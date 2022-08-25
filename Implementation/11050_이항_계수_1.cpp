#include<bits/stdc++.h>

using namespace std;

int n, k;

vector<int> v;

int main(void){
    cin >> n >> k;

    v.push_back(1);
    v.push_back(1);

    for(int i = 2; i <= max(n, k); i++){
        v.push_back(v[i-1]*i);
    }
    cout << v[n] / v[n-k] / v[k];
}
