#include <bits/stdc++.h>

using namespace std;

int n, m, result = 0;
map<string, bool> lines;

int main(void){
    cin >> n >> m;
    
    string tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        lines.insert({tmp, true});
    }

    for(int i = 0; i < m; i++){
        cin >> tmp;
        if(lines.find(tmp) == lines.end()){
            // pass
        }
        else{
            result++;
        }
    }
    cout << result << '\n';
}

