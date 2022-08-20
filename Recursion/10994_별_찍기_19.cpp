#include<bits/stdc++.h>
#define MAX 397
using namespace std;

int n, width;
char arr[MAX][MAX];

void painter(int _n){
    if(_n == 0){
        return;
    }
    
    int _width = (_n-1)*2+1;
    int _margin = width-_width==0 ? 0 : (width-_width)/2;
    int _character = _margin%2==0?'*':' ';

    for(int i = 0; i < _width; i++){
        for(int j = 0; j < _width; j++){
            arr[_margin+i][_margin+j] = _character;
        }
    }

    painter(_n-1);


    

}

int main(void){
    cin >> n;
    width = 1 + (n-1)*4;
    painter(1 + (n-1)*2);


    for(int i = 0; i < width; i++){
        for(int j = 0; j < width; j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }

    

    
}
