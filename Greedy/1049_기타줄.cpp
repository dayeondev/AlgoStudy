#include <bits/stdc++.h>
#include <algorithm>


using namespace std;

int n, m;
vector<int> bundle, piece;

int main(void){
    cin >> n >> m;
    int tmp1, tmp2;
    for(int i = 0; i < m; i++){
        cin >> tmp1 >> tmp2;
        bundle.push_back(tmp1);
        piece.push_back(tmp2);
    }

    sort(bundle.begin(), bundle.end());
    sort(piece.begin(), piece.end());

    if(bundle[0] > piece[0]*6){
        cout << n*piece[0] << endl;
    }
    else{
        if(n % 6 == 0){
            cout << n/6*bundle[0] << endl;
        }
        else if( ((n/6)+1)*bundle[0] < (n/6*bundle[0])+(n%6*piece[0]) ){
            cout << ((n/6)+1)*bundle[0] << endl;
        }
        else{
            cout << (n/6*bundle[0])+(n%6*piece[0]) << endl;
        }

    }
    
}

