#include <bits/stdc++.h>
#include <sstream>
#include <cstring>

using namespace std;

int len_a, len_b;

string a, b;
string a1, b1;
string a2, b2;
int result_a = 0, result_b = 0;
int tmp;

stringstream sstream;

int main(void){

    cin >> a >> b;

    a1 = a;
    a2 = a;

    b1 = b;
    b2 = b;

    len_a = a.length();
    len_b = b.length();

    for (int i = 0; i < len_a; i++){
        if(a[i]=='5'){
            a2[i] = '6';
        }
        else if(a[i]=='6'){
            a1[i] = '5';
        }
    }
    

    for (int i = 0; i < len_b; i++){
        if(b[i]=='5'){
            b2[i] = '6';
        }
        else if(b[i]=='6'){
            b1[i] = '5';
        }
    }
    
    
    sstream.clear();
    sstream.str(a1);
    while(sstream >> tmp);
    result_a += tmp;

    sstream.clear();
    sstream.str(b1);
    while(sstream >> tmp);
    result_a += tmp;


    sstream.clear();
    sstream.str(a2);
    while(sstream >> tmp);
    result_b += tmp;


    sstream.clear();
    sstream.str(b2);
    while(sstream >> tmp);
    result_b += tmp;

    sstream.clear();

    cout << result_a << " " << result_b << endl;

}