#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n, l;
int result = 0;
vector<int> v;

int main(void){
    cin >> n >> l;


    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());


    int start = v[0];
    int end = start + l - 1;
    result++;
    for(int i = 1; i < n; i++){
        if(v[i] <= end){
            // pass
        }
        else{
            start = v[i];
            end = start + l - 1;
            result++;
        }
    }
    cout << result << endl;
    

}