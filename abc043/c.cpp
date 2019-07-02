#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i=0;i<N;i++) {
    cin >> a[i];
  }
  sort(a.begin(),a.end());
  int min=0;
  for(int i=0;i<N;i++) {
    min += (a[0]-a[i])*(a[0]-a[i]);
  }
  for(int key=a[0]+1;key<=a[N-1];key++) {
    int ans=0;
    for(int j=0;j<N;j++) {
      ans += (key-a[j])*(key-a[j]);
    }
    if(min>ans) min=ans;
  }
  cout << min << endl;
}
