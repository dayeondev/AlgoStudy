#include<bits/stdc++.h>

using namespace std;

int t;
int tmp[3];
bool result;

int main(void){
    cin >> t;
    
    cout << "Gnomes:" << endl;
    while (t > 0){
        result = false;
        for(int i = 0; i < 3; i++){
            cin >> tmp[i];
        }

        for(int i = 0; i < 2; i++){
            if(tmp[i] < tmp[i+1]){
                result = true;
            }
            else{
                result = false;
                break;
            }
        }
        if(!result){

            for(int i = 0; i < 2; i++){
                if(tmp[i] > tmp[i+1]){
                    result = true;
                }
                else{
                    result = false;
                    break;
                }
            }
        }

        if(result){
            cout << "Ordered" << endl;
        }
        else{
            cout << "Unordered" << endl;
        }
        


        t--;
    }
    
    
}
