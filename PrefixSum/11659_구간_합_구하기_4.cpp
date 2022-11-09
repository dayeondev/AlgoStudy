#include<bits/stdc++.h>
#define MAX 100001

using namespace std;

int n, m;


int arr[MAX];
int sum[MAX];

int main(void){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;
    

    for(int i = 1; i < n+1; i++){
        cin >> arr[i];
        sum[i] = 0;
    }
    sum[1] = arr[1];
    for(int i = 2; i < n+1; i++){
        sum[i] = sum[i-1] + arr[i];
    }

    int _i, _j;
    for(int i = 0; i < m; i++){
        cin >> _i >> _j;
        cout << sum[_j] - sum[_i-1] << "\n";
    }


}

