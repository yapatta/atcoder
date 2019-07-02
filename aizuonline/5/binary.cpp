#include <iostream>
using namespace std;
bool binarySearch(int A[],int ans, int size);
int main() {
  int n, k;
  cin >> n;
  int* p = (int*)malloc(sizeof(int)*n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  cin >> k;
  int* t = (int*)malloc(sizeof(int)*k);
  for (int i = 0; i < k; i++) {
    cin >> t[i];
  }
  int counter = 0;
  for (int  i = 0; i < k; i++) {
    if(binarySearch(p, t[i], n)) counter++;
  }
  cout << counter << endl;
  free(p);
  free(t);
  return 0;
}
bool binarySearch(int A[],int ans, int size) {
  int left = 0;
  int right = size;
  int middle = (left+right)/2;
  while(left < right) {
    middle = (left+right)/2;
    if(A[middle] == ans) return true;
    else if(A[middle] < ans) {
      left = middle+1;
    } else if(A[middle] > ans) {
      right = middle;
    }
  }
  return false;
}
