#include <bits/stdc++.h>

using namespace std;

int t, n, result;

int main(void){

    cin >> t;
    
    while(t > 0){
        t--;


        map<string, int> m;

        cin >> n;

        if(n == 0){
            cout << "0\n";

            continue;
        }

        string tmp1, tmp2;
        for(int i = 0; i < n; i++){
            cin >> tmp1 >> tmp2;

            if(m.find(tmp2) == m.end()){
                m.insert({tmp2, 1});
            }
            else{
                m[tmp2]++;
            }
        }
        
        result = 1;
        for(auto iter:m){
            result *= (iter.second + 1);
        }

        cout << result - 1 << '\n';
    }

}
