#include<bits/stdc++.h>

using namespace std;

int a, b, result = 0;
map<int, bool> m;

int main(void){
    cin >> a >> b;

    int tmp;
    for(int i = 0; i < a; i++){
        cin >> tmp;
        m.insert({tmp, true});
    }
    for(int i = 0; i < b; i++){
        cin >> tmp;
        if(m.find(tmp) == m.end()){
            // pass
        }
        else{
            result--;
        }
    }

    cout << a + b + result + result << '\n';
}