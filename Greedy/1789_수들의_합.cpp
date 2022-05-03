#include <bits/stdc++.h>

using namespace std;

long s, sum = 0;

int main(void){
    cin >> s;

    long i = 1;
    while (s > sum)
    {
        sum += i;
        // cout << "i: " << i << ", sum: " << sum << '\n';
        i++;
    }
    i -= 1;
    if (s < sum){
        i -= 1;
    }
    
    cout << i << '\n';

}