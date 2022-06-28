#include <bits/stdc++.h>

using namespace std;

int source, target, n;
int dist;
vector<int> nums;

int result = 0;


int main(void){
    cin >> source >> target;
    cin >> n;

    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        nums.push_back(tmp);
    }

    if(source != target){
        nums.push_back(source+1);
        nums.push_back(source-1);
        
        int _min = nums[0];
        dist = max(nums[0], target) - min(nums[0], target);
        for(int i = 1; i < n + 2; i++){
            if (dist > max(nums[i], target) - min(nums[i], target)){
                _min = nums[i];
                dist = max(nums[i], target) - min(nums[i], target);
            }
        }

        source = _min;
        result++;
    }

    cout << result + max(source, target) - min(source, target) << endl;


}