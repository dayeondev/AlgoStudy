#include <bits/stdc++.h>
using namespace std;

int sum = 0, result;

int main(void) {
    int tmp;
    for(int i = 0; i < 5; i++){
        cin >> tmp;
        sum += tmp<40?40:tmp;
    }
    
    cout << sum / 5 << '\n';
}
