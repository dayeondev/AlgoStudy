#include<bits/stdc++.h>
#define M 31

using namespace std;

int n;
string str;
long result = 0, r = 1;

int main(void){
    cin >> n;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        result = (result + (str[i]-'a'+1) * r) % 1234567891;
        r = (r * M) % 1234567891;
    }


    cout << result << endl;
}
