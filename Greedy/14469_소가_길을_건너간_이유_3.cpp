#include <bits/stdc++.h>
#include <algorithm>
#define MAX 1000000

using namespace std;

int n;
pair<int, int> arr[MAX];
int result = 0;



int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr+n);


    for(int i = 0; i < n; i++){
        if(result < arr[i].first){
            result = arr[i].first + arr[i].second;
        }
        else{
            result += arr[i].second;
        }
    }

    cout << result;
}