#include <bits/stdc++.h>
#include <algorithm>


using namespace std;

int n;
long long result = 0;
vector<int> nums;
vector<int> target;




int main(void){
    cin >> n;

    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        nums.push_back(tmp);
        target.push_back(i+1);
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        result += max(nums[i], target[i]) - min(nums[i], target[i]);
    }

    cout << result << endl;


}