#include <bits/stdc++.h>

using namespace std;

string str;
int result = 0;

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> str;

    string tmp;
    for(int i = 1; i < str.length() + 1; i++){
        map<string, int> m;

        for(int j = 0; j < str.length() - i + 1; j++){
            tmp = str.substr(j, i);
            // cout << tmp << '\n';
            if(m.find(tmp) == m.end()){
                m.insert({tmp, 1});
            }
            else{
                // m[tmp]++;
                // 
            }
        }

        result += m.size();
    }
    cout << result << '\n';
}

