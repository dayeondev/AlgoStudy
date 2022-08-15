#include<bits/stdc++.h>
#define MAX 50

using namespace std;

int n;
pair<int, int> arr[MAX];
int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    int rank;
    bool weight, height;

    for(int i = 0; i < n; i++){
        rank = 1;
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            weight = arr[i].first >= arr[j].first;
            height = arr[i].second >= arr[j].second;
            if(weight || height){
                // pass
            }
            else{
                rank++;
            }
        }
        cout << rank << " ";
    }
}
