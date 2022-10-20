#include<bits/stdc++.h>

using namespace std;

int n;
int result = 0;

int main(void){
    cin >> n;
    result = result - n + 1;
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        result += tmp;
    }
    cout << result;
}
