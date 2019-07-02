#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int c[3][3];
  for(int h=0;h<3;h++) {
    for(int w=0;w<3;w++) {
      cin >> c[h][w];
    }
  }
  int a,b[3];
  for(int a=0;a<=c[0][0];a++) {
    bool flag=true;
    b[0]=c[0][0]-a;
    b[1]=c[0][1]-a;
    b[2]=c[0][2]-a;

    if( !( (c[1][0]-b[0]==c[1][1]-b[1])&&(c[1][1]-b[1]==c[1][2]-b[2]) ) ) flag=false;
    if( !( (c[2][0]-b[0]==c[2][1]-b[1])&&(c[2][1]-b[1]==c[2][2]-b[2]) ) ) flag=false;

    if(flag) {
      cout << __TRUE << endl;
      return 0;
    }
  }
  cout << __FALSE << endl;
}
