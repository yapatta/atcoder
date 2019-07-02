#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  for(int i=0;i<N;i++) {
    cin >>d[i];
  }
  sort(d.begin(),d.end());
  int count=1;
  for(int i=0;i<d.size()-1;i++) {
    if(d[i] != d[i+1])
      count++;
  }
  cout << count << endl;
}
