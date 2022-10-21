#include<bits/stdc++.h>

using namespace std;

int n;
bool cups[3] = {true, false, false};

int main(void){
    cin >> n;
    int n1, n2;
    bool tmp;
    for(int i = 0; i < n; i++){
        cin >> n1 >> n2;
        tmp = cups[n1-1];
        cups[n1-1] = cups[n2-1];
        cups[n2-1] = tmp;
    }
    for(int i = 0; i < 3; i++){
        if(cups[i]) cout << i+1 << endl;
    }
}
