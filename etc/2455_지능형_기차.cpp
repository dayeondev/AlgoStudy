#include<bits/stdc++.h>

using namespace std;

int tmp = 0;
int result = 0;

int main(void){
    int in, out;
    for(int i = 0; i < 4; i++){
        cin >> out >> in;
        tmp += in - out;
        result = max(result, tmp);
    }
    cout << result << endl;

}
