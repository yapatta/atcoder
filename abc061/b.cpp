#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
int city[55]={};

int main() {
  int n,m;
  cin >> n >> m;
  for(int i=0;i<m;i++) {
    int a,b;
    cin >> a >> b;
    city[a]++;
    city[b]++;
  }
  for(int i=1;i<=n;i++){
    cout << city[i] << endl;
  }
}
