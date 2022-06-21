#include <bits/stdc++.h>
#define MAX 91
using namespace std;

int n;
long long results[MAX] = {-1};

long long fibo(int x){
    // cout << "fibo(" << x << ")" << endl;
    if(x==1||x==2){
        return 1;
    }
    else if(results[x] != -1){
        // cout << "results[x]: " << results[x] <<endl;
        return results[x];
    }
    else{
        results[x] = fibo(x-1) + fibo(x-2);
        return results[x];
    }
}


int main(void){
    cin >> n;
    
    
    for(int i = 0; i < MAX; i++){
        results[i] = -1;
    }
    
    
    cout << fibo(n) << endl;

}