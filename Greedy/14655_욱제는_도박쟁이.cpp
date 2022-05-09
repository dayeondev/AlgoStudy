#include <bits/stdc++.h>

using namespace std;

int n;
int result = 0;

int main(void){
    cin >> n;

    for (int i = 0; i < n*2; i++){
        int tmp;
        cin >> tmp;
        if (tmp < 0){
            tmp *= -1;
        }
        result += tmp;
    }
    cout << result << endl;

}