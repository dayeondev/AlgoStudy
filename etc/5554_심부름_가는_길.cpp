#include<bits/stdc++.h>

using namespace std;

int n = 0;

int main(void){
    int tmp;
    for(int i = 0; i < 4; i++){
        cin >> tmp;
        n += tmp;
    }

    cout << n/60 << '\n' << n%60 << '\n';

}
