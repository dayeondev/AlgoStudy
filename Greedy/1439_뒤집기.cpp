#include <bits/stdc++.h>

using namespace std;

string str;

int main(void){
    cin >> str;
    int result = 0;

    if (str.length() == 1){
        cout << 0 << endl;
        return 0;
    }

    int prev = str[0];
    for(int i = 1; i < str.length(); i++){
        if (prev != str[i]&&str[i]!=str[0]){
            result++;
        }
        prev = str[i];
    }

    cout << result << endl;
}