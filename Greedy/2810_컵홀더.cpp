#include <bits/stdc++.h>

using namespace std;

int n;
string info;
int result = 0;
int including_L = 0;

int main(void){
    cin >> n >> info;

    for (int i = 0; i < info.length(); i++){
        if (info[i] == 'L'){
            i++;
            including_L = 1;
        }
        result++;
    }
    cout << result + including_L;
}