#include <bits/stdc++.h>
#define MAX 201
using namespace std;
int n;
int nums[MAX] = {0, };
int main(void) {
    cin >> n;
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        nums[tmp+100]++;
    }
    cin >> n;
    cout << nums[n+100] << endl;
    
    return 0;
}

