#include <bits/stdc++.h>
#include <algorithm>
#define MAX 100

using namespace std;

int n;
int result = 0;
int arr[MAX] = {0,};

bool compare(int a, int b){
    return a > b;
}

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // sort(arr, arr+n, compare);

    int prev = arr[n-1];
    int dist;
    for(int i = n-2; i > -1; i--){
        dist = 0;
        while(prev+dist <= arr[i]){
            dist++;
            result++;
        }
        prev = arr[i]-dist;
        
    }
    cout << result;
}