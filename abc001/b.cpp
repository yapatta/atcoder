#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  int m;
  cin >> m;
  double x=(double)m/1000;
  if(x<0.1){
    cout << "00" << endl;
  }else if(0.1<=x&&x<1){
    cout << 0 << (int)(x*10) << endl;
  }else if(1<=x&&x<6){
    cout << (int)(x*10) << endl;
  }else if(6<=x&&x<=30){
    cout << (int)x+50 << endl;
  }else if(30<x&&x<=70) {
    cout << (int)(x-30)/5 + 80 << endl;
  }else{
    cout << 89 << endl;
  }
}
