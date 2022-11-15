#include<bits/stdc++.h>

using namespace std;

int t;
long long l1, w1, l2, w2;
int main(void){
    cin >> t;

    while(t > 0){
        cin >> l1 >> w1 >> l2 >> w2;
        if(l1*w1 > l2*w2){
            cout << "TelecomParisTech";
        }
        else if (l1*w1 < l2*w2){
            cout <<"Eurecom";
        }
        else{
            cout << "Tie";
        }

        cout << endl;

        t--;
    }
}
