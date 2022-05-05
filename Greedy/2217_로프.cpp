#include <bits/stdc++.h>
#include <algorithm>

using namespace std;



int main(void){

    int n;
    long maximum = 0;
    cin >> n;

    int rope[n] = {0,};
    for (int i = 0; i < n; i++){
        cin >> rope[i];
    }
    sort(rope, rope + n);

    for (int i = 0; i < n; i++){
        int result = rope[i] * (n-i);
        if(maximum < result){
            maximum = result;
        }
    }

    cout << maximum;
    

}