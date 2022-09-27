#include <bits/stdc++.h>

using namespace std;

int a, b;
int chicken;

int main(void){
    cin >> a >> b >> chicken;
    a += b;
    if(a < chicken+chicken){
        cout << a;
    }
    else{
        cout << a - chicken - chicken;
    }
}
