#include<bits/stdc++.h>

using namespace std;

int n;

int main(void){
    cin >> n;

    string tmp;
    int sum;
    for(int i = 0; true; i++){
        sum = i;
        tmp  = to_string(i);

        for(int j = 0; j < tmp.length(); j++){
            sum += tmp[j] - '0';
        }

        if(sum == n){
            cout << i << '\n';
            break;
        }
        else if(i == n){
            cout << 0 << '\n';
            break;
        }
    }
}
