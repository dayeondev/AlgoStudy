#include <bits/stdc++.h>

using namespace std;

int n;
vector<long long> v;
long long result = 0;

long long cash = 0, coin = 0;


int main(void){
    cin >> n >> cash;



    int now;
    int prev;
    cin >> prev;
    for(int i = 1; i < n; i++){
        cin >> now;
        if(prev < now){
            cash = (cash % prev) + ((cash / prev) * now);
        }
        else{
            // pass
        }
        prev = now;
    }

    

    cout << cash << endl;
    
}
