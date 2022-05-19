#include <bits/stdc++.h>

using namespace std;

string str;
int left_result = 0;
int right_result = 0;
int term = 0;
bool flag = false;

int main(void){
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if (0 <= str[i]-'0' && str[i]-'0' <= 9){
            term = term * 10 + (str[i] - '0');
        }
        else if (flag){
            // cout << "term: " << term << endl;
            right_result -= term;
            term = 0;
            
        }
        else{
            if (str[i] == '-'){
                flag = true;
            }
            // cout << "term: " << term << endl;
            left_result += term;
            term = 0;
        }
    }
    if (flag){
        right_result -= term;
    }
    else{
        left_result += term;
    }
    cout << left_result + right_result;
}