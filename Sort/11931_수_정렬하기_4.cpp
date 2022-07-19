#include <bits/stdc++.h>
#include <algorithm>
#define MAX 1000000
using namespace std;

int n;
int arr[MAX];

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for(int i = n-1; i > -1; i--){
        cout << arr[i] << '\n';
    }
}