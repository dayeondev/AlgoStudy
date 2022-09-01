#include<bits/stdc++.h>

using namespace std;

string document, keyword;
int result = 0;

int main(void){
    getline(cin, document);
    getline(cin, keyword);

    int n = document.length() - keyword.length() + 1;

    string piece;
    for(int i = 0; i < n; i++){
        piece = document.substr(i, keyword.length());
        if(keyword == piece){
            result++;
            i += keyword.length() - 1;
        }
    }
    cout << result << endl;
}
