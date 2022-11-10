#include<bits/stdc++.h>

using namespace std;

int m, d;
string result;

int main(void){
    cin >> m >> d;

    if(m<2) result = "Before";
    else if(m==2){
        if(d<18) result = "Before";
        else if(d==18) result = "Special";
        else result = "After";
    }
    else result = "After";

    cout << result << endl;
}

