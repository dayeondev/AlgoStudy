#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int n, m, j, apple;
int cnt = 0;
int pos = 1;

int main(void){
    cin >> n >> m >> j;


    for (int i = 0; i < j; i++){
        cin >> apple;

        // cout << "pos: " << pos << ", apple: " << apple << ", pos+m-1: " << pos+m-1 << endl;
        if (pos > apple){
            cnt += pos - apple;
            pos = apple;
        }
        else if (apple > pos + m - 1){
            int dist = apple - (pos+m-1);
            cnt += dist;
            // cout << "elif2 pos: " << pos << endl;
            pos += dist;

        }
        // cout << "cnt: " << cnt << endl;
    }
    cout << cnt;
}
