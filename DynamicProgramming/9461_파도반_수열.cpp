#include<bits/stdc++.h>
#define MAX 101

using namespace std;

int t, n;
long long arr[MAX];

int main(void){
    cin >> t;

    while(t > 0){
        cin >> n;
        arr[1] = 1;
        arr[2] = 1;
        arr[3] = 1;
        arr[4] = 2;
        arr[5] = 2;
        for(int i = 6; i < n+1; i++){
            arr[i] = arr[i-1] + arr[i-5];
        }
        cout << arr[n] << endl;

        t--;
    }
        
}
