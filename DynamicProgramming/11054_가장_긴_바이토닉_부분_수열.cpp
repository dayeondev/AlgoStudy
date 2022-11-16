#include<bits/stdc++.h>
#define MAX 1001

using namespace std;

int n;
int nums[MAX];
int _nums[MAX];
int dp_inc[MAX];
int dp_dec[MAX];
int result = 0;

int main(void){
    cin >> n;

    for(int i = 1; i < n+1; i++){
        cin >> nums[i];
        _nums[n+1-i] = nums[i];
        dp_inc[i] = 1;
        dp_dec[i] = 1;
    }


    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < i; j++){
            if(nums[i] > nums[j]){
                dp_inc[i] = max(dp_inc[j]+1, dp_inc[i]);
            }
        }
    }
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < i; j++){
            if(_nums[i] > _nums[j]){
                dp_dec[i] = max(dp_dec[j]+1, dp_dec[i]);
            }
        }
    }

    for(int i = 1; i < n+1; i++){
        result = max(result, dp_inc[i]+dp_dec[n-i+1]-1);
    }

    cout << result << endl;

}

