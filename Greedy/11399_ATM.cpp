#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n;
int cnt = 0;
int tmp = 0;

int main(void){
    cin >> n;

    int p[n] = {0, };

    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    
    sort(p, p + n);

    for(int i = 0; i < n; i++){
        cnt = cnt + tmp + p[i];
        tmp = tmp + p[i];
        
    }

    cout << cnt << endl;

}