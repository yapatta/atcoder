#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
  string s;
  string p[7] = {"WBWBWWBWBWBW","WBWWBWBWBWWB","WWBWBWBWWBWB","WBWBWBWWBWBW","WBWBWWBWBWWB","WBWWBWBWWBWB","WWBWBWWBWBWB"};
  string ans[7] = {"Do","Re","Mi","Fa","So","La","Si"};
  cin >> s;
  string b=s.substr(1,12);
  for(int i=0;i<7;i++){
    if(b==p[i]) {
      cout << ans[i] << endl;
      break;
    }
  }
}
