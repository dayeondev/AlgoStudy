#include<bits/stdc++.h>
#define MAX 100001

using namespace std;

int n, k;
int temps[MAX];
int sum[MAX];
int result;

int main(void){
    cin >> n >> k;

    for(int i = 1; i < n+1; i++){
        cin >> temps[i];
        sum[i] = 0;
    }

    sum[0] = 0;
    for(int i = 0; i < n+1; i++){
        sum[i] = sum[i-1] + temps[i];
    }
    result = sum[k] - sum[0];
    for(int i = k+1; i < n+1; i++){
        result = max(result, sum[i] - sum[i-k]);
    }
    cout << result << endl;
}

