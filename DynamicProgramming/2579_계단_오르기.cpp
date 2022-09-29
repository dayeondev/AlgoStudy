#include<bits/stdc++.h>
#define MAX 301

using namespace std;

int n;
int stairs[MAX];
int scores[MAX];

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> stairs[i];
        scores[i] = 0;
    }

    scores[0] = stairs[0];
    scores[1] = stairs[0] + stairs[1];
    scores[2] = max(stairs[0]+stairs[2], stairs[1]+stairs[2]);

    for(int i = 3; i < n; i++){
        scores[i] = max(scores[i-2]+stairs[i], scores[i-3]+stairs[i-1]+stairs[i]);
    }
    cout << scores[n-1] << endl;
}
