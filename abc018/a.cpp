#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define All(a) (a).begin(),(a).end()
using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if(a>b&&b>c){
    printf("%d\n%d\n%d\n",1,2,3);
  }else if(a>c&&c>b){
    printf("%d\n%d\n%d\n",1,3,2);
  }else if(b>a&&a>c){
    printf("%d\n%d\n%d\n",2,1,3);
  }else if(b>c&&c>a){
    printf("%d\n%d\n%d\n",3,1,2);
  }else if(c>a&&a>b){
    printf("%d\n%d\n%d\n",2,3,1);
  }else if(c>b&&b>a){
    printf("%d\n%d\n%d\n",3,2,1);
  }else{
    return 0;
  }
}
