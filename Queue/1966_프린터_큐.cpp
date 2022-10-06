#include<bits/stdc++.h>

using namespace std;

int t, n, m;
int cnt, tmp;

int main(void){
    cin >> t;

    while (t > 0) {
        vector<int> v;
        queue<pair<int,bool>> q;
        cnt = 1;

        cin >> n >> m;

        for(int i = 0; i < n; i++){
            cin >> tmp;
            v.push_back(tmp);
            if(i == m){
                q.push({tmp, true});
            }
            else{
                q.push({tmp, false});
            }
        }

        sort(v.begin(), v.end());

        while (true) {
            if(v.back() == q.front().first){
                if(q.front().second){
                    cout << cnt << endl;
                    break;
                }
                else{
                    v.pop_back();
                    q.pop();
                }
                cnt++;
            }
            else{
                q.push({q.front().first, q.front().second});
                q.pop();
            }
        }
        
        t--;
    }
    
}
