#include <bits/stdc++.h>

using namespace std;

int t, result;
string a, b;
int zero, one;




int main(void){
    cin >> t;

    while(t > 0){
        cin >> a >> b;

        zero = 0, one = 0;
        result = 0;


        for(int i = 0; i < a.length(); i++){
            if(a[i] == b[i]){
                // pass
            }
            else{
                if(a[i] == '0'){
                    if(one > 0){
                        one--;
                        result++;
                    }
                    else{
                        zero++;
                    }
                }
                else if(a[i] == '1'){
                    if(zero > 0){
                        zero--;
                        result++;
                    }
                    else{
                        one++;
                    }
                }
            }
        }
        result += zero + one;

        cout << result << endl;


        t--;
    }


}