#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;
vector<pair<int,int> > A(MAX, pair<int,int>(0,0));
vector<pair<int,int> > B(MAX, pair<int,int>(0,0));

int main() {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    int v;
    cin >> v;
    if(i%2==0) {
      A[v].second = v;
      A[v].first++;
    } else {
      B[v].second = v;
      B[v].first++;
    }
  }
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());

  if(A[MAX-1].second==B[MAX-1].second) {
    if(A[MAX-1].first < B[MAX-1].first) {
      cout << n-A[MAX-2].first-B[MAX-1].first << endl;
    } else if(A[MAX-1].first > B[MAX-1].first){
      cout << n-A[MAX-1].first-B[MAX-2].first << endl;
    } else {
      cout << n-A[MAX-1].first-max(A[MAX-2].first,B[MAX-2].first) << endl;
    }
  }else {
    cout << n-A[MAX-1].first-B[MAX-1].first << endl;
  }
  return 0;
}
