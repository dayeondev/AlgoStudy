#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int n;
int houses[MAX][3];
int scores[MAX][3];

int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> houses[i][0] >> houses[i][1] >> houses[i][2];
    }

    scores[0][0] = houses[0][0];
    scores[0][1] = houses[0][1];
    scores[0][2] = houses[0][2];

    for(int i = 1; i < n; i++){
        scores[i][0] = min(scores[i-1][1], scores[i-1][2]) + houses[i][0];
        scores[i][1] = min(scores[i-1][0], scores[i-1][2]) + houses[i][1];
        scores[i][2] = min(scores[i-1][0], scores[i-1][1]) + houses[i][2];
    }

    cout << min(min(scores[n-1][0], scores[n-1][1]),scores[n-1][2]) << endl;
}
