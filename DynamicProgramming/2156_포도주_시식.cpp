#include<bits/stdc++.h>
#define MAX 10000

using namespace std;

int n;
int cups[MAX];
int scores[MAX];


int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> cups[i];
        scores[i] = 0;
    }

    scores[0] = cups[0];
    scores[1] = cups[0] + cups[1];
    scores[2] = max(max(cups[0]+cups[2], cups[1]+cups[2]), scores[1]);

    for(int i = 3; i < n; i++){
        if(cups[i-1]==0){
            scores[i] = scores[i-2]+cups[i];
        }
        else{
            scores[i] = max(max(scores[i-2]+cups[i], scores[i-3]+cups[i-1]+cups[i]), scores[i-1]);
        } 
    }
    cout << scores[n-1] << endl;
}
