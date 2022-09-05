#include<bits/stdc++.h>

using namespace std;

int n, l, cnt = 0;
vector<pair<int, int>> v;

int main(void){
    cin >> n >> l;

    int start, end;
    for(int i = 0; i < n; i++){
        cin >> start >> end;

        v.push_back(make_pair(start, end));
    }

    sort(v.begin(), v.end());


    int pos = 0;
    int dist;
    int num_of_plank;
    for(auto item:v){
        if(item.first <= pos){
            // pass
        }
        else{
            pos = item.first;
        }

        if(item.second <= pos){
            // pass
        }
        else{
            dist = item.second - pos;
            if(dist%l==0){
                num_of_plank = dist/l;

                cnt += num_of_plank;
                pos = item.second;
            }
            else{
                num_of_plank = (dist/l)+1;

                cnt += num_of_plank;
                pos += num_of_plank * l;
            }
        }
        
    }


    cout << cnt << endl;
}
