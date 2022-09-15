#include<bits/stdc++.h>
#define MAX 100

using namespace std;

int n;
int nums[MAX];
char operators[MAX-1];
bool visited[MAX-1];
int maximum = -1000000001, minimum = 1000000001;
vector<char> v;

int tmp;

void DFS(int depth){
    if(depth == n-1){
        tmp = nums[0];
        for(int i = 0; i < depth; i++){
            if(v[i] == '+')         tmp += nums[i+1];
            else if(v[i] == '-')    tmp -= nums[i+1];
            else if(v[i] == '*')    tmp *= nums[i+1];
            else if(v[i] == '/')    tmp /= nums[i+1];
        }
        if(tmp > maximum)   maximum = tmp;
        if(tmp < minimum)   minimum = tmp;
    }

    for(int i = 0; i < n-1; i++){
        if(visited[i]){
            // pass
        }
        else{
            visited[i] = true;
            v.push_back(operators[i]);
            DFS(depth+1);
            visited[i] = false;
            v.pop_back();
        }
    }
}

int main(void){
    minimum -= 1;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    int op_num, op_idx = 0;
    for(int i = 0; i < 4; i++){
        cin >> op_num;
        for(int j = 0; j < op_num; j++){
            if(i == 0)      operators[op_idx] = '+';
            else if(i == 1) operators[op_idx] = '-';
            else if(i == 2) operators[op_idx] = '*';
            else if(i == 3) operators[op_idx] = '/';

            visited[op_idx] = false;
            op_idx++;
        }
    }

    DFS(0);

    cout << maximum << '\n';
    cout << minimum << '\n';

}
