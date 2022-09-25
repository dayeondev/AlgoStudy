#include<bits/stdc++.h>

using namespace std;

int result = 0;
int tmp;

int main(void){
    cin >> tmp;
    while (tmp != -1)
    {
        result += tmp;
        cin >> tmp;
    }
    cout << result;
}
