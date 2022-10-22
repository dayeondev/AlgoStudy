#include<bits/stdc++.h>
#define MAX 100000

using namespace std;

int n;
int nums[MAX];
int scores[MAX];
int result;

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        scores[i] = 0;
    }
    scores[0] = nums[0];
    result = scores[0];
    for(int i = 1; i < n; i++){
        scores[i] = max(scores[i-1]+nums[i], nums[i]);
        result = max(scores[i], result);
    }

    cout << result << endl;
}
