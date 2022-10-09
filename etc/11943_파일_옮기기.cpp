#include<bits/stdc++.h>

using namespace std;

int a, b, c, d;
int result1, result2;
int main(void){
    cin >> a >> b >> c >> d;
    result1 = b + c;
    result2 = a + d;
    if(result1 < result2){
        cout << result1;
    }
    else{
        cout << result2;
    }
}
