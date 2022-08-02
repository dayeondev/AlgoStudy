#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int n;
map<string, bool> m;
vector<string> result;

int main(void){
    cin >> n;

    string name, status;
    for(int i = 0; i < n; i++){
        cin >> name >> status;

        if(status == "enter"){
            if(m.find(name) == m.end()){
                m.insert({name, true});
            }
            else{
                m[name] = true;
            }
        }
        else{
            m[name] = false;
        }
    }

    for(auto iter:m){
        if(iter.second == true) result.push_back(iter.first);
    }
    sort(result.begin(), result.end());

    for(int i = result.size()-1; i > -1; i--){
        cout << result[i] << '\n';
    }
}
