#include<bits/stdc++.h>
#include<algorithm>

#define MAX 500000
using namespace std;

int n;
int nums[MAX];

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    else{
        return a.first > b.first;
    }
}

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    // avg
    int avg = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    avg = round((float)sum / (float)n);

    // median
    sort(nums, nums+n);
    int median = nums[(n-1)/2];

    // mode
    // int arr[8001] = {0, };
    vector<pair<int, int>> v;
    int mode;
    int cnt = 0;
    for(int i = -4000; i < 4001; i++){
        v.push_back({0, i});
    }
    for(int i = 0; i < n; i++){
        // cout << nums[i] + 4000 << endl;
        v[nums[i]+4000].first += 1;
        // cout << v[nums[i]+4000].first << endl;
    }
    sort(v.begin(), v.end(), compare);
    if(n==1){
        mode = nums[0];
    }
    else{
        if(v[0].first==v[1].first){
            mode = v[1].second;
        }
        else{
            mode = v[0].second;
        }
    }

    // range
    int maximum = nums[0];
    int minimum = nums[0];
    int range;
    for(int i = 0; i < n; i++){
        maximum = max(nums[i], maximum);
        minimum = min(nums[i], minimum);
    }
    if (maximum == minimum){
        range = 0;
    }
    else{
        range = maximum - minimum;
    }
        

    cout << avg << '\n' << median << '\n' << mode << '\n' << range << '\n';
}
