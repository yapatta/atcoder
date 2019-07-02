#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
const ll MOD=1e9+7;
using namespace std;

int main() {
  int N;
  cin >> N;
  int b[8]={};
  int other=0;
  rep(i,N){
    int a;
    cin >> a;
    if(1<=a&&a<400) b[0]++;
    else if(400<=a&&a<800) b[1]++;
    else if(800<=a&&a<1200) b[2]++;
    else if(1200<=a&&a<1600) b[3]++;
    else if(1600<=a&&a<2000) b[4]++;
    else if(2000<=a&&a<2400) b[5]++;
    else if(2400<=a&&a<2800) b[6]++;
    else if(2800<=a&&a<3200) b[7]++;
    else other++;
  }
  sort(b,b+8);

  int min=0;
  rep(i,8){
    if(b[i]>0) min++;
  }
  cout << max(min,1) << " " << min+other << endl;
}
