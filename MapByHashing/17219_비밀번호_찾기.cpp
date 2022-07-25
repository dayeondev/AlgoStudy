#include <bits/stdc++.h>

using namespace std;

int n1, n2;
map<string, string> m;

int main(void){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n1 >> n2;

    string tmp1, tmp2;
    for(int i = 0; i < n1; i++){
        cin >> tmp1 >> tmp2;
        if(m.find(tmp1) == m.end()){
            m.insert({tmp1, tmp2});
        }
    }


    for(int i = 0; i < n2; i++){
        cin >> tmp1;
        cout << m[tmp1] << '\n';
    }
}
