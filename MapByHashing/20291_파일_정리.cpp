#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int n;
map<string, int> m;
vector<string> v;

int main(void){
    cin >> n;

    string filename, extension;
    for(int i = 0; i < n; i++){
        cin >> filename;
        extension = filename.substr(filename.find(".")+1, filename.length()-1);
        if(m.find(extension) == m.end()){
            m.insert({extension, 1});
        }
        else{
            m[extension]++;
        }
    }

    for(auto iter:m){
        v.push_back(iter.first);
    }

    sort(v.begin(), v.end());

    for(auto iter:v){
        cout << iter << " " << m[iter] << '\n';
    }
}
