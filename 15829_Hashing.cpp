#include<bits/stdc++.h>
#define R 31

using namespace std;

int n;
string str;
int result = 0;

int main(void){
    cin >> n;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        result = (result + (str[i]-'a'+1) * (int)pow(R, i)) % 1234567891;
    }


    cout << result << endl;
}
