#include<bits/stdc++.h>
#define MAX 1000001

using namespace std;

int n;
int mem[MAX];

int main(void){
    cin >> n;
    mem[0] = 1;
    mem[1] = 1;
    for(int i = 2; i < n+1; i++){
        mem[i] = (mem[i-1] + mem[i-2]) % 15746;
    }
    cout << mem[n];
}
