#include<bits/stdc++.h>

using namespace std;

int main(void){
    int n, tmp, result = 0;
    cin >> n;
    for(int i = 0; i < 5; i++){
        cin >> tmp;
        if(tmp==n){
            result++;
        }
    }
    cout << result << endl;
}
