#include <bits/stdc++.h>

using namespace std;

int n;
map<string, int> names;

int main(void){
    cin >> n;

    string name;
    for(int i = 0; i < n; i++){
        cin >> name;
        if(names.find(name) == names.end()){
            names.insert({name, 1});
        }
        else{
            names[name]++;
        }
    }

    for(int i = 0; i < n-1; i++){
        cin >> name;
        names[name]--;
    }

    for(auto item:names){
        if(item.second == 1){
            cout << item.first << '\n';
            break;
        }
    }
}

