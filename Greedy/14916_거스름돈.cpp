#include<bits/stdc++.h>

using namespace std;

int n;
int result = 0;

int main(void){
    cin >> n;

    result += n/5;
    n = n % 5;
    
    if(n == 4 || n == 2){
        result += n/2;
    }
    else if(n == 3){
        if(result > 0){
            result = result - 1 + 4;
        }
        else{
            result = -1;
        }
    }
    else if(n == 1){
        if(result > 0){
            result = result - 1 + 3;
        }
        else{
            result = -1;
        }
    }
    cout << result << endl;

}