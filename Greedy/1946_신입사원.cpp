#include <bits/stdc++.h>
#include <algorithm>

using namespace std;


bool compare(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}

int t;
int main(void){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> t;

    int n;
    int result;
    while(t > 0){
        // int score[n][2];
        cin >> n;

        vector<pair<int,int>> score(n);
        result = 0;

        // int n1, n2;
        for(int i = 0; i < n; i++){
            cin >> score[i].first >> score[i].second;            
        }

        
        sort(score.begin(), score.end(), compare);
        int m = 100001;
        for(int i = 0; i < n; i++){
            
            if (score[i].second < m){
                m = score[i].second;
                result++;
            }
            
        }

        cout << result << endl;
        

        t--;
    }
} 