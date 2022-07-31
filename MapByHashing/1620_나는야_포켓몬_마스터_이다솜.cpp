#include <bits/stdc++.h>
#include <string>

using namespace std;

int n_pokemon, n_question;
map<int, string> map_idx;
map<string, int> map_name;

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n_pokemon >> n_question;

    string str;
    for(int i = 1; i < n_pokemon+1; i++){
        cin >> str;

        map_idx.insert({i, str});
        map_name.insert({str, i});
    }

    for(int i = 0; i < n_question; i++){
        cin >> str;
        if('0' <= str[0] && str[0] <= '9'){
            cout << map_idx[stoi(str)] << '\n';
        }
        else{
            cout << map_name[str] << '\n';
        }
    }
}
