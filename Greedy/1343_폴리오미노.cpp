#include <bits/stdc++.h>

using namespace std;

string str, result = "";

int main(void){
    cin >> str;

    int count = 0, index = 0;
    int len_str = str.length();

    if (len_str < 2){
        if (str[0] == '.'){
            cout << "." << endl;
        }
        else{
            cout << -1 << endl;
        }
        return 0;
    }
    
    while(true){
        if (index > len_str-1){
            break;
        }

        if(str[index] == 'X'){
            count++;
            // cout << "count: " << count;
        }
        else{
            if (count % 2 != 0){
                cout << -1 << endl;
                return 0;
            }
            else if (count >= 2){
                while(count / 4 > 0){
                    result.push_back('A');
                    result.push_back('A');
                    result.push_back('A');
                    result.push_back('A');
                    count -= 4;
                }
                if (count == 2){
                    result.push_back('B');
                    result.push_back('B');
                    count -= 2;
                }
            }
            result.push_back('.');

        }

        index++;
    }

    if (count % 2 != 0){
        cout << -1 << endl;
        return 0;
    }
    else if (count >= 2){
        while(count / 4 > 0){
            result.push_back('A');
            result.push_back('A');
            result.push_back('A');
            result.push_back('A');
            count -= 4;
        }
        if (count == 2){
            result.push_back('B');
            result.push_back('B');
            count -= 2;
        }
    }

    cout << result << endl;
}