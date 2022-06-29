#include <bits/stdc++.h>
#include <algorithm>
#define MAX 1000

using namespace std;

int t, n;
pair<int, string> arr[MAX];



int main(void){
    cin >> t;
    while(t > 0){
        cin >> n;

        pair<int, string> tmp;
        for(int i = 0; i < n; i++){
            cin >> arr[i].second >> arr[i].first;
        }

        sort(arr, arr+n);

        cout << arr[n-1].second << '\n';


        t--;
    }
    

}
