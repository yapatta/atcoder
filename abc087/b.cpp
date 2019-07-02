#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int A,B,C,X;
  cin >> A >> B >> C >> X;
  int count=0;
  for(int a=0;a<=A;a++) {
    for(int b=0;b<=B;b++) {
      for(int c=0;c<=C;c++) {
        if(a*500+b*100+c*50 == X)
          count++;
      }
    }
  }
  cout << count << endl;
}
