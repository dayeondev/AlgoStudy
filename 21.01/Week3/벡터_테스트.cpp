#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dadada(vector<int>& data, int a, int b){
  // int tmp;
  // tmp = data[a];
  // data[a] = data[b];
  // data[b] = tmp;
  iter_swap(data.begin() + a, data.begin() + b);
}

int main(){
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  dadada(v, 0, 1);
  // iter_swap(v.begin(), v.begin() + 1);
  cout << v[0] << ", " << v[1];
}