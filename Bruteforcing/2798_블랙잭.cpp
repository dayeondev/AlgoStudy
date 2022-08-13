#include<bits/stdc++.h>
#define MAX 300000

using namespace std;

int n, target, maximum = 0;
int arr[MAX];

int main(void){
    cin >> n >> target;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i!=j){
                for(int k = 0; k < n; k++){
                    sum = arr[i] + arr[j] + arr[k];
                    if((j!=k && i!=k) && ((target >= sum) && (sum > maximum))){
                        maximum = sum;
                    }
                }
            }
        }
    }
    cout << maximum << '\n';

}
