#include <bits/stdc++.h>

using namespace std;

string str1;
bool flags[4] = {false, };

int main(void){
    
    // cin >> str1;
    getline(cin, str1);

    int len_str1 = str1.length();

    for (int i = 0; i < len_str1; i++){
        if (flags[0] == false){
            if (str1[i] == 'U'){
                flags[0] = true;
            }                      
        }
        else if (flags[1] == false){
            if (str1[i] == 'C'){
                flags[1] = true;
            }                      
        }
        else if (flags[2] == false){  
            if (str1[i] == 'P'){
                flags[2] = true;
            }          
        }
        else if (flags[3] == false){
            if (str1[i] == 'C'){
                flags[3] = true;
                break;
            }
        }
        
    }

    if ((flags[0]&&flags[1])&&(flags[2]&&flags[3])){
        cout << "I love UCPC" << endl;
    }
    else{
        cout << "I hate UCPC" << endl;
    }
    
    
}