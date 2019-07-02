#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define __TRUE "yes"
#define __FALSE "no"

int main() {
  int h,w;
  cin >> h >> w;
  vector<string> a(h+2);
  for(int i=1;i<=w+2;i++) a[0] += "#";
  for(int i=1;i<=h;i++) {
    string temp;
    cin >> temp;
    a[i] = "#"+temp+"#";
  }
  for(int i=1;i<=w+2;i++) a[h+1] += "#";

  for(int i=0;i<a.size();i++) {
    cout << a[i] << endl;
  }
}
