#include<bits/stdc++.h>

using namespace std;

int n;

int main(void){
    cin >> n;

    // top
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "@@@@@";
        }
        cout << endl;
    }

    // mid
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                cout << '@';
            }
            for(int k = 0; k < n; k++){
                cout << "   ";
            }
            for(int k = 0; k < n; k++){
                cout << '@';
            }
            cout << endl;
        }
        
    }


    // bottom
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "@@@@@";
        }
        cout << endl;
    }
}
