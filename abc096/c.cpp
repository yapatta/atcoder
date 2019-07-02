#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  int h,w;
  cin >> h >> w;
  vector<string> st(h);

  for(int i=0;i<h;i++) {
    cin >> st[i];
  }

  bool flag=true;
  for(int i=0;i<h;i++) {
    for(int j=0;j<w;j++) {
      int count=0;
      if(st[i][j]=='#') {
        if(i+1<=h-1 && st[i+1][j]=='#') count++;
        if(j+1<=w-1 && st[i][j+1]=='#') count++;
        if(i-1>=0 && st[i-1][j]=='#') count++;
        if(j-1>=0 && st[i][j-1]=='#') count++;
        
        if(count==0) {
          flag=false;
          break;
        }
      }
    }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
