#include<bits/stdc++.h>

using namespace std;

int origin[3], target[3], cnt = 1;

int main(void){
    origin[0] = 1;
    origin[1] = 1;
    origin[2] = 1;
    cin >> target[0] >> target[1] >> target[2];

    while (!(origin[0] == target[0] && (origin[1] == target[1] && origin[2] == target[2])))
    {
        origin[0] = ++origin[0]>15?1:origin[0];
        origin[1] = ++origin[1]>28?1:origin[1];
        origin[2] = ++origin[2]>19?1:origin[2];

        cnt++;
    }
    
    cout << cnt << '\n';
}
