#include<bits/stdc++.h>
#define MAX 51

using namespace std;

long long arr[MAX][MAX][MAX];
bool visited[MAX][MAX][MAX];
int a, b, c;

int w(int a, int b, int c){
    if((a<=0||b<=0) || c<=0){
        return 1;
    }
    if((a>20||b>20) || c>20){
        return w(20, 20, 20);
    }
    if((a<b)&&(b<c)){
        if(!visited[a][b][c-1]) arr[a][b][c-1] = w(a, b, c-1);
        visited[a][b][c-1] = true;
        if(!visited[a][b-1][c-1]) arr[a][b-1][c-1] = w(a, b-1, c-1);
        visited[a][b-1][c-1] = true;
        if(!visited[a][b-1][c]) arr[a][b-1][c] = w(a, b-1, c);
        visited[a][b-1][c] = true;
        
        long long __res = 0;
        __res += arr[a][b][c-1];
        __res += arr[a][b-1][c-1];
        __res -= arr[a][b-1][c];

        return __res;
    }
    

    if(!visited[a-1][b][c]) arr[a-1][b][c] = w(a-1, b, c);
    visited[a-1][b][c] = true;
    if(!visited[a-1][b-1][c]) arr[a-1][b-1][c] = w(a-1, b-1, c);
    visited[a-1][b-1][c] = true;
    if(!visited[a-1][b][c-1]) arr[a-1][b][c-1] = w(a-1, b, c-1);
    visited[a-1][b][c-1] = true;
    if(!visited[a-1][b-1][c-1]) arr[a-1][b-1][c-1] = w(a-1, b-1, c-1);
    visited[a-1][b-1][c-1] = true;

    long long _res = 0;
    _res += arr[a-1][b][c];
    _res += arr[a-1][b-1][c];
    _res += arr[a-1][b][c-1];
    _res -= arr[a-1][b-1][c-1];

    return _res;


}

int main(void){

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            for(int k = 0; k < MAX; k++){
                arr[i][j][k] = -1;
                visited[i][j][k] = false;
            }   
        }
    }

    cin >> a >> b >> c;

    while (!((a==-1&&b==-1)&&(c==-1)))
    {
        cout << "w(" << a << ", " << b << ", " << c << ") = ";
        cout << w(a, b, c) << "\n";

        
        cin >> a >> b >> c;
    }
    
}
