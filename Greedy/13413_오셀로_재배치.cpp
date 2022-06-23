#include <bits/stdc++.h>
#define MAX 100000

using namespace std;

int t, n;
bool arr[MAX];
int w, b, result;
string domain, target;

int main(void){
    cin >> t;

    while(t > 0){
        cin >> n;
        cin >> domain >> target;

        arr[MAX] = {false, };
        w = 0;
        b = 0;

        for(int i = 0; i < domain.length(); i++){
            if(domain[i] != target[i]){
                if(domain[i] == 'W') w++;
                if(domain[i] == 'B') b++;
            }
        }

        result = max(w, b);
        
        cout << result << endl;


        t--;
    }
}