#include<bits/stdc++.h>

using namespace std;

string line;
char vowel[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
int result;

int main(void){
    while(true){
        result = 0;
        getline(cin, line);
        
        if(line.length()==1 && line[0]=='#'){
            break;
        }

        for(int i = 0; i < line.length(); i++){
            for(int j = 0; j < 10; j++){
                if(line[i]==vowel[j]){
                    result++;
                }
            }
        }
        cout << result << '\n';
    }
}
