#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;
    int target = n * m;
    
    for(int i = 0; i < 5; i++){
        cin >> m;
        cout << m-target << " ";
    }
    
}
