#include <bits/stdc++.h>
#include <algorithm>
#define MAX 2000000

using namespace std;

int n, m, idx_n, idx_m;
int arr_n[MAX/2], arr_m[MAX/2];
int result[MAX];

int main(void){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;

    int tmp;
    for(int i = 0; i < n; i++){
        cin >> arr_n[i];
    }
    for(int i = 0; i < m; i++){
        cin >> arr_m[i];
    }
    
    for(int i = 0; i < n+m; i++){
        if(idx_n < n && idx_m < m){
            if(arr_n[idx_n] < arr_m[idx_m]){
                result[i] = arr_n[idx_n];
                idx_n++;
            }
            else{
                result[i] = arr_m[idx_m];
                idx_m++;
            }
        }
        else if(idx_n < n){
            result[i] = arr_n[idx_n];
            idx_n++;
        }
        else{
            result[i] = arr_m[idx_m];
            idx_m++;
        }
    }

    for(int i = 0; i < n+m; i++){
        cout << result[i] << " ";
    }
}
