#include <bits/stdc++.h>
#include <queue>
using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> q;
int result = 0;
int sum;

int main(void){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        q.push(tmp);
    }

    while(q.size() > 1){
        sum = q.top();
        q.pop();
        sum += q.top();
        q.pop();
        result += sum;

        q.push(sum);
    }
    cout << result << '\n';

}

