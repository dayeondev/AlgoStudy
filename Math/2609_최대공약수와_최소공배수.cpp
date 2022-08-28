#include <bits/stdc++.h>

using namespace std;

int n1, n2;
int result_gcd; //(Greatest Common Divisor) 최대공약수
int result_lcm; //(Least Common Multiple) 최소공배수

int GetGCD(int _n1, int _n2){
    // cout << "n1: " << _n1 << ", n2: " << _n2 << endl;
    if(_n1 % _n2 == 0){
        return _n2;
    }

    return GetGCD(_n2, _n1 % _n2);
}


int main(void){
    cin >> n1 >> n2;
    
    
    result_gcd = GetGCD(n1, n2);
    result_lcm = n1 * n2 / result_gcd;
    
    cout << result_gcd << endl;
    cout << result_lcm << endl;
}
