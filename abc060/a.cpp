#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
int city[55]={};

int main() {
  string a,b,c;
  cin >> a >> b >> c;
  if(a[a.size()-1]==b[0] && b[b.size()-1]==c[0]) {
    cout << "YES" << endl;
  }else {
    cout << "NO" << endl;
  }
}
