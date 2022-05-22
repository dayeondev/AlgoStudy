#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int result = 0;

int main(void){

        while(cin >> a >> b >> c){
        

        if (b-a > c-b){
            result = b-a-1;
        }
        else{
            result = c-b-1;
        }

        cout << result << endl;
    }
    
    
}