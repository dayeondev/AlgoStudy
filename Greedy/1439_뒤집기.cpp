#include <bits/stdc++.h>

using namespace std;

int T;
int cnt;

int buttonTypes[3] = {300, 60, 10};
int buttonCnt[3] = {0, 0, 0};

int main(void){
    cin >> T;
    for (int i = 0; i < 3; i++){
        // cnt += ;
        buttonCnt[i] = T / buttonTypes[i];
        T %= buttonTypes[i];
    }
    if (T == 0){
        cout << buttonCnt[0] << ' ' << buttonCnt[1] << ' ' << buttonCnt[2] << '\n';
    }
    else{
        cout << -1 << '\n';
    }
    // cout << cnt << '\n';
}