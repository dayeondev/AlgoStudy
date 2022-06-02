#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a > b;
}
int n;
int arr_size = 'Z'-'A'+1;
int result = 0;

int main(void){
    int sum[arr_size] = {0, };
    cin >> n;


    string str;
    for(int i = 0; i < n; i++){
        cin >> str;
        for(int j = 0; j < str.length(); j++){

            sum[str[j]-'A'] += pow(10, (str.length() -j -1));
        }
    }
    
    sort(sum, sum + arr_size, compare);
    // for(int i = 0; i < arr_size; i++){
    //     cout << sum[i] << endl;
    // }

    for(int i = 0; i < 10; i++){
        result += sum[i] * (9 - i);
    }
    cout << result;
}