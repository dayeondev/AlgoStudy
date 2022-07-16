#include <bits/stdc++.h>
#include <algorithm>
#define MAX 5000000

using namespace std;


int n, k;
int arr[MAX];
int main(void){
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> n >> k;

    int tmp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        // v.push_back(tmp);
    }

    sort(arr, arr+n);

    cout << arr[k-1] << '\n';

}
