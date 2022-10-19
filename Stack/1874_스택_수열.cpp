#include<bits/stdc++.h>
#define MAX 100000

using namespace std;

int n;
stack<int> s;
vector<char> result;
int nums[MAX];

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int num = 1, i = 0;
    s.push(num);
    result.push_back('+');
    num++;
    while (i < n)
    {
        if(s.empty()){
            s.push(num);
            result.push_back('+');
            num++;
        }
        if(s.top()==nums[i]){
            s.pop();
            result.push_back('-');
            i++;
        }
        else if(s.top() < nums[i]){
            s.push(num);
            result.push_back('+');
            num++;
        }
        else{
            cout << "NO\n";
            return 0;
        }

    }
    for(auto iter:result){
        cout << iter << '\n';
    }

}