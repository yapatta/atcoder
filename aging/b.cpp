#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 200005
#define __TRUE "Yes"
#define __FALSE "No"
using namespace std;

int main() {
  int N,A,B;
  cin >> N >> A >> B;
  int a=0,b=0,c=0;
  for(int i=0;i<N;i++) {
    int p;
    cin >> p;
    if(p<=A) a++;
    else if(A+1<=p && p<=B) b++;
    else if(B+1<=p) c++;
  }
  int min=a;
  if(b<min) min=b;
  if(c<min) min=c;
  cout << min << endl;
}
