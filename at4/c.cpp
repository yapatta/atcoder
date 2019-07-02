#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n,i;
  cin >> n;
  vector<pair<int, int> > a(n);
  for(i = 0; i < n ;i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a.begin(), a.end());

  int c = a[0].first;
  a[0].first = 0 ;
  for(i = 1;i < n;i++) {
    if(a[i].first == c) {
      c = a[i].first;
      a[i].first = a[i-1].first;
    } else {
      c = a[i].first;
      a[i].first = a[i-1].first + 1;
    }
  }


  for(i = 0; i < n ;i++) {
    swap(a[i].first, a[i].second);
  }
  sort(a.begin(), a.end());
  for (i = 0; i < n; i++) {
    cout << a[i].second << endl;
  }
  return 0;
}
