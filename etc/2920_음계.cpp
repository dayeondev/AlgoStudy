#include <bits/stdc++.h>

using namespace std;

const int n = 8;
int arr[n];

int main(void){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int flag = true;
    
    for (int i = 1; i < n; i++){
        if (arr[i-1] < arr[i]){

        }
        else{
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "ascending" << endl;
        return 0;
    }

    flag = true;
    for (int i = 1; i < n; i++){
        if (arr[i-1] > arr[i]){

        }
        else{
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "descending" << endl;
        return 0;
    }
    else{
        cout << "mixed" << endl;

    }

    
}