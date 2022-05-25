#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int l, p, v;

int main(void){
    cin >> l >> p >> v;
    int index = 1;
    while (l+p+v){
        cout << "Case " << index << ": " << v/p*l + min(v%p, l) << endl;
        index ++;
        cin >> l >> p >> v;
    }
}