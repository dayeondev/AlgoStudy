#include <bits/stdc++.h>

using namespace std;

int n;
int cnt = 0;
int flag = -1;

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        int milk = -1;
        cin >> milk;

        if(flag != -1){
            if (flag == 0){
                if (milk == 1){
                    flag = milk;
                    cnt++;
                }

            }
            else if (flag == 1){
                if (milk == 2){
                    flag = milk;
                    cnt++;
                }
            }
            else if (flag == 2){
                if (milk == 0){
                    flag = milk;
                    cnt++;
                }
            }
        }
        else{
            if (milk == 0){
                flag = milk;
                cnt++;
            }
        }
    }

    cout << cnt << endl;


}