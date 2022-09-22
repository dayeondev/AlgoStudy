#include<bits/stdc++.h>

using namespace std;

int main(void){
    int s1 = 0, s2 = 0;
    int tmp;
    for(int i = 0; i < 4; i++){
        cin >> tmp;
        s1 += tmp;
    }

    for(int i = 0; i < 4; i++){
        cin >> tmp;
        s2 += tmp;
    }
    cout << max(s1, s2) << endl;
}
