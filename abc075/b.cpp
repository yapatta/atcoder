#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define MAX 52

int main() {
  int H,W;
  cin >> H >> W;
  char S[MAX][MAX]={};
  char Pri[MAX][MAX]={};

  for(int i=0;i<H;i++) {
    cin >> S[i];
  }
  for(int i=0;i<H;i++) {
    for(int j=0;j<W;j++) {
      if(S[i][j] != '#') {
        int count=0;
        if(i>=0&&j+1>=0&&S[i][j+1]=='#') count++;
        if(i>=0&&j-1>=0&&S[i][j-1]=='#') count++;
        if(i+1>=0&&j>=0&&S[i+1][j]=='#') count++;
        if(i-1>=0&&j>=0&&S[i-1][j]=='#') count++;

        if(i+1>=0&&j+1>=0&&S[i+1][j+1]=='#') count++;
        if(i+1>=0&&j-1>=0&&S[i+1][j-1]=='#') count++;
        if(i-1>=0&&j+1>=0&&S[i-1][j+1]=='#') count++;
        if(i-1>=0&&j-1>=0&&S[i-1][j-1]=='#') count++;
        Pri[i][j] = count+'0';
      } else {
        Pri[i][j]='#';
      }
    }
  }
  for(int i=0;i<H;i++) {
    cout << Pri[i] << endl;
  }
}
