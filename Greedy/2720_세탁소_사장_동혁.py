#include <bits/stdc++.h>

using namespace std;

int c, n;

int coinCounts[4] = {0, 0, 0, 0};

int coinTypes[4] = {25, 10, 5, 1};

int main(void){

    cin >> n;

    

    for (int i = 0; i < n; i++){

        cin >> c;

    

        for (int j = 0; j < 4; j++){

            coinCounts[j] = c / coinTypes[j];

            c %= coinTypes[j];

        }

        cout << coinCounts[0] << " " << coinCounts[1] <<" "<< coinCounts[2]<<" "<<coinCounts[3]<<"\n";

    }

}
