#include <bits/stdc++.h>
#include <algorithm>
#define MAX 1000
using namespace std;
 
int t, n_candy, n_box;
int volumes[MAX];
 
 
int main(void){
   cin >> t;
   while(t > 0){
       cin >> n_candy >> n_box;
 
       int r, c;
       for(int i = 0; i < n_box; i++){
           cin >> r >> c;
           volumes[i] = r*c;
       }
 
       sort(volumes, volumes+n_box);
 
       int result = 0;
       for(int i = n_box-1; i > -1; i--){
           if(n_candy - volumes[i] > 0){
               n_candy -= volumes[i];
               result++;
           }
           else{
               break;
           }
       }
       cout << result+1 << endl;
 
 
 
       t--;
   }
 
}
