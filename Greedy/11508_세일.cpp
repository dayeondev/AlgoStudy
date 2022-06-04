#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n, result = 0;

bool compare(int a, int b){
    return a > b;
}

int main(void){
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n, compare);

    for(int i = 0; i < n; i++){
        if (i%3==2){
            continue;
        }
        result += arr[i];
    }
    cout << result;

}