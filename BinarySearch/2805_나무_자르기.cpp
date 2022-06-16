#include <bits/stdc++.h>

using namespace std;

long n, m, sum;
vector<int> tree;
long result = 0;


int main(void){
    cin >> n >> m;

    long tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        tree.push_back(tmp);
    }

    int mid, start = 0, end = *max_element(tree.begin(), tree.end());
    // cout << start << " " << end << endl;
    
    while(start <= end){
        sum = 0;
        mid = (start+end)/2;
        // cout << mid << endl;
        for(int i = 0; i < n; i++){
            if(tree[i] > mid){
                sum += tree[i] - mid;
            }
        }
        if(sum < m){
            end = mid - 1;
        }
        else{
            result = mid;
            start = mid + 1;
        }
    }
    cout << result << endl;
}