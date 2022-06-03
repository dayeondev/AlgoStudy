#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n, l;

int main(void){
    cin >> n >> l;
    int f[n];

    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    sort(f, f+n);
    for(int i = 0; i < n; i++){
        if (l < f[i]){
            cout << l;
            return 0;
        }
        else{
            l++;
        }
    }
    cout << l;
}