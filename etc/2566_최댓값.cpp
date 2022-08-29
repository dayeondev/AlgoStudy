#include<bits/stdc++.h>

using namespace std;

int maximum = -1;
int x, y;

int main(void){
    
    int tmp;
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            cin >> tmp;
            if (tmp > maximum){
                maximum = tmp;
                x = i;
                y = j;
            }
        }
    }
    cout << maximum << "\n";
    cout << x << " " << y << "\n";
}
