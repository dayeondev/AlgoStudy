#include <bits/stdc++.h>

using namespace std;

int n;
map<int, int> m;

int main(void){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;

    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(m.find(tmp) == m.end()){
            m.insert({tmp, 1});
        }
        else{
            m[tmp]++;
        }
    }

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        cout << m[tmp] << " ";
    }
}
