#include<bits/stdc++.h>

using namespace std;

int result, tmp;

int main(void){
    cin >> result;
    for(int i = 0; i < 9; i++){
        cin >> tmp;
        result -= tmp;
    }
    cout << result << endl;
}
