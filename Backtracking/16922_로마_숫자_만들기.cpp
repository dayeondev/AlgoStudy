#include<bits/stdc++.h>
#define MAX 20

using namespace std;

int n;
int nums[4] = {1, 5, 10, 50};
vector<int> v;
map<int, bool> m;

int result = 0;

void DFS(int depth){
    if(depth == n){
        int tmp = 0;
        for(int i = 0; i < v.size(); i++){
            tmp += v[i];
        }

        if(m.find(tmp) == m.end()){
            m.insert({tmp, true});
            result++;
        }
        else{
            // pass
        }
        return;
    }

    for(int i = 0; i < 4; i++){
        if (depth!=0 && v[depth-1] > nums[i]){
            // pass
        }
        else{
            v.push_back(nums[i]);
            DFS(depth+1);
            v.pop_back();
        }
            
    }
}

int main(void){
    cin >> n;

    DFS(0);

    cout << result << endl;
}
