#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int nums[3];

int main(void){
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums+3);
    cout << nums[0] << " " << nums[1] << " " << nums[2];
}