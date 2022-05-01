#include <bits/stdc++.h>

using namespace std;

int n;
int cnt;

int coinTypes[6] = {500, 100, 50, 10, 5, 1};

int main(void){
    cin >> n;
    n = 1000 - n;
    for (int i = 0; i < 6; i++){
        cnt += n / coinTypes[i];
        n %= coinTypes[i];
    }
    cout << cnt << '\n';
}