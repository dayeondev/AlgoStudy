#include<bits/stdc++.h>

using namespace std;

int arr[4];
string str = "DCBAE";

int main(void){
    int sum;
    int tmp;
    for(int i = 0; i < 3; i++){
        sum = 0;
        for(int j = 0; j < 4; j++){
            cin >> tmp;
            sum += tmp;
        }
        cout << str[sum] << endl;
    }
}
