#include <bits/stdc++.h>
using namespace std;

int days, a, b, c, d;

int main(void){
    cin >> days >> a >> b >> c >> d;

    cout << days - max((a%c==0?a/c:a/c+1),(b%d==0?b/d:b/d+1)) << '\n';
}