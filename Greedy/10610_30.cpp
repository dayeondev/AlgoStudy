#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

string num;
string result;
long sum = 0;

int main(void){
    cin >> num;
    bool zero_flag = false;
    bool three_flag = false;

    for(int i = 0; i < num.length(); i++){
        if (num[i] == '0'){
            zero_flag = true;
        }
        sum += num[i] - '0';
    }

    if (!zero_flag){
        cout << -1;
    }
    else if (sum % 3 == 0){
        sort(num.begin(), num.end());
        reverse(num.begin(), num.end());
        for(int i = 0; i < num.length(); i++){
            cout << num[i];
        }
    }
    else{
        cout << -1;
    }




    



}