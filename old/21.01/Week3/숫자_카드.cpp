#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  int m;
  cin >> m;


  for(int i = 0; i < m; i++){

    int tmp; 
    cin >> tmp;

    int start = 0, end = n - 1;
    bool isfound = false;

    while(start <= end){
      int mid = (start + end) / 2;

      if(v[mid]==tmp){
        isfound = true;
        break;
      }

      else if(v[mid] < tmp){
        start = mid + 1;
      }
      else{
        end = mid - 1;
      }
    }

    if(!isfound){
      cout << "0 ";
    }
    else{
      cout << "1 ";
    }
  }

  return 0;
}
