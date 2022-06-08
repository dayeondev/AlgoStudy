#include <bits/stdc++.h>

int n;
bool end_flag;
using namespace std;

int main() {
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        queue<char> q;
        
        end_flag = false;
        for(int j = 0; j < str.length(); j++){
            //cout << str[j] << endl;
            if(str[j] == ')'){
                if(q.empty()){
                    end_flag = true;
                    break;
                }
                //cout << q.front() << endl;
                
                q.pop();
            }
            else{
                q.push(str[j]);
            }
            
        }
        if(!q.empty() || end_flag){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        
        
    }
    

}
