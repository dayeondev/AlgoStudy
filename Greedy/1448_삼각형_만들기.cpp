#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<int> v;

int main(void){
    cin >> n;
    
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    // cout << v[0] << v[1] << v[2];
    
    int n1, n2, n3;
    for(int i = n - 2; i >= 1; i--){
        n1 = v[i+1];
        n2 = v[i];
        n3 = v[i-1];
        // cout << n + 1 << n << n -1;
        // cout << "n1: " << n1 << ", n2: " << n2 << ", n3: " << n3 << endl;
        if (n1 >= n2 + n3){
            continue;
        }
        else{
            cout << n1 + n2 + n3 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

}