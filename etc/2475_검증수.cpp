#include <bits/stdc++.h>

using namespace std;

int result;
int tmp;

int main(void){
    for(int i = 0; i < 5; i++){
        cin >> tmp;
        result += tmp * tmp;
    }
    cout << result % 10;
}