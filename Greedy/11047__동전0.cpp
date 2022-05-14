#include <bits/stdc++.h>

using namespace std;

long n, k, cnt = 0;

int main(void){
    cin >> n >> k;
    long arr[n] = {0, };

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = n-1; i >= 0; i--){
        // cout << arr[i] << endl;
        cnt += k / arr[i];
        k %= arr[i];
        if(k == 0){
            break;
        }
    }

    cout << cnt << endl;
}