#include<bits/stdc++.h>

using namespace std;

int n;
int t = 0, f = 0;

int main(void){
    cin >> n;
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(tmp) t++;
        else f++;
    }
    if(t < f) cout << "Junhee is not cute!";
    else cout << "Junhee is cute!";
}
