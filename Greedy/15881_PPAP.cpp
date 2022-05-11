#include <bits/stdc++.h>

using namespace std;

int n;
int cnt = 0;

int main(void){
    cin >> n;
    if (n - 3 <= 0){
        cout << cnt << endl;
        return 0;
    }
    char ppap[n] = {};
    

    for (int i = 0; i < n; i++){
        cin >> ppap[i];
    }

    for (int i = 0; i < n - 3; i++){
        if (ppap[i] == 'p'){
            if (ppap[i+1] == 'P'){
                if (ppap[i+2] == 'A'){
                    if (ppap[i+3] == 'p'){
                        cnt++;
                        i += 3;
                    }
                }
            }
        }
    }
    cout << cnt << endl;

}