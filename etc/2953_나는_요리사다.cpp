#include<bits/stdc++.h>

using namespace std;

int result = 0;
int result_i = 0;
int sum;
int tmp;

int main(void){

    for(int i = 1; i < 5+1; i++){
        sum = 0;
        for (int j = 0; j < 4; j++){
            cin >> tmp;
            sum += tmp;
        }
        if(result < sum){
            result = sum;
            result_i = i;
        }

    }
    cout << result_i << " " << result << endl;
}