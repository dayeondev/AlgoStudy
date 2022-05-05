#include <bits/stdc++.h>

using namespace std;

int n, k;
int cnt = 0;

int main(void){
    
    cin >> n;
    cin >> k;

    while(n!=1){
        if (n % k == 0){
            n /= k;
        }
        else{
            n -= 1;
        }
        cnt++;

    }
    cout << cnt << "\n";

}