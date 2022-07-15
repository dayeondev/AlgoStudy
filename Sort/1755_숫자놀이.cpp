#include <bits/stdc++.h>
#include <algorithm>

using namespace std;


int m, n;
vector<pair<string, int>> v;
string nums[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main(void){
    cin >> m >> n;

    string tmp;
    for(int i = m; i < n + 1; i++){
        if(i / 10 == 0){
            tmp = nums[i];
        }
        else{
            tmp = nums[i/10] + " " + nums[i%10];
        }
        v.push_back(make_pair(tmp, i));
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i].second << ' ';
        if(i%10==9){
            cout << '\n';
        }
        else{
            // pass
        }
    }

}
