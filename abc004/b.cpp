#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  string ans[4][4];
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      cin >> ans[3-i][3-j];
    }
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      if(j!=0) cout << " ";
      cout << ans[i][j];
    }
    cout << endl;
 }
}
