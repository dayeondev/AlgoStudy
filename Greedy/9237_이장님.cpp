#include <bits/stdc++.h>
#include <algorithm>
#define MAX 100000

using namespace std;

int n;
int arr[MAX] = {0, };

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int m = n+arr[0];
    for(int i = 1; i < n; i++){
        if(m < n-i+arr[i]) m = n-i+arr[i];
    }
    cout << m+1 << endl;
}