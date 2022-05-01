#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

void Merge(vector<int>& data, int start, int mid, int end){
  // vector<int> tmp(end+1);
  int *tmp = new int[end + 1];
  int tmp_index = 0;
  int i = start, j = mid + 1;

  while(i <= mid && j <= end){
    if(data[i] < data[j]){
      tmp[tmp_index++] = data[i++];
    }
    else{
      tmp[tmp_index++] = data[j++];
    }
  }

  while(i <= mid){
    tmp[tmp_index++] = data[i++];
  }
  while(j <= end){
    tmp[tmp_index++] = data[j++];
  }

  for(int k = start, tmp_index = 0; k <= end; k++, tmp_index++){
    data[k] = tmp[tmp_index];
  }
  delete[] tmp;

}

void MergeSort(vector<int>& data, int start, int end){
  if(start < end){
    int mid = start + (end - start) / 2;

    MergeSort(data, start, mid);
    MergeSort(data, mid + 1, end);

    Merge(data, start, mid, end);
  }


}

void QuickSort(vector<int>& data, int start, int end){
  if(start >= end){
    return;
  }

  int pivot = start;
  int i = pivot + 1;
  int j = end;
  int tmp;

  while(i <= j){
    while(i <= end && data[i] <= data[pivot]){
      i++;
    }
    while(j > start && data[j] >= data[pivot]){
      j--;
    }
    if(i > j){
      tmp = data[pivot];
      data[pivot] = data[j];
      data[j] = tmp;
    }
    else{
      tmp = data[i];
      data[i] = data[j];
      data[j] = tmp;
    }
  }
  QuickSort(data, start, j - 1);
  QuickSort(data, j + 1, end);
  
}

int main(){
  // cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n, tmp;
  vector<int> v;

  // cin >> n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    // cin >> tmp;
    scanf("%d", &tmp);
    v.push_back(tmp);
  }

  // QuickSort(v, 0, n - 1);
  MergeSort(v, 0, n-1);
  for(int i = 0; i < n; i++){
    printf("%d\n", v[i]);
  }
  


  return 0;
}