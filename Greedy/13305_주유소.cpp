#include <bits/stdc++.h>

using namespace std;

int n;
int main(void){
    cin >> n;

    long dist[n-1] = {0, };
    long cost[n] = {0, };

    for(int i = 0; i < n-1; i++){
        cin >> dist[i];
    }

    for(int i = 0; i < n; i++){
        cin >> cost[i];
    }

    long best_cost = cost[0];
    long result = best_cost * dist[0];

    for(int i = 1; i < n-1; i++){
        if (best_cost > cost[i]){
            best_cost = cost[i];
        }
        result += best_cost * dist[i];

    }
    cout << result;
}