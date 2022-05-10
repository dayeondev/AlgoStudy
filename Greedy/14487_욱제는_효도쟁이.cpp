#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n;
int result = 0;

int main(void){
    cin >> n;
    int costs[n] = {0, };

    for (int i = 0; i < n; i++){
        cin >> costs[i];
    }

    sort(costs, costs + n);

    for (int i = 0; i < n-1; i++){
        result += costs[i];
    }

    cout << result << endl;
}