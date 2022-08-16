#include <bits/stdc++.h>

using namespace std;

int n, cnt = 0;

int main(void){
    cin >> n;

    bool coord;
    string str;
    for(int i = 666; true; i++){
        str = to_string(i);
        // cout << str << '\n';
        for(int j = 0; j < str.length()-2; j++){
            if(str[j] == '6' && (str[j+1] == '6' && str[j+2] == '6')){
                cnt++;
                break;
            }
        }
        if(cnt == n){
            cout << i;
            return 0;
        }
    }

}
