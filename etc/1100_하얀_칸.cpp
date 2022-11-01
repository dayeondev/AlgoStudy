#include<bits/stdc++.h>

using namespace std;

string str;
int result = 0;

int main(void){
    for(int i = 0; i < 8; i++){
        cin >> str;
        for(int j = 0; j < 8; j++){
            if(i%2==0){
                if(j%2==0){
                    if(str[j]=='F') result++;
                }
            }
            else{
                if(j%2==0){
                    // pass
                }
                else{
                    if(str[j]=='F') result++;
                }
            }
        }
    }
    cout << result << endl;
}
