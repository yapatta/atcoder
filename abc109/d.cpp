#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

struct point{
  int a,b;
  int c,d;
};

int main(){
  int H,W;
  cin >> H >> W;
  vector<vector<int> > a(H+1,vector<int>(W+1,0));
  for(int i=1;i<=H;i++){
    for(int j=1;j<=W;j++){
      cin >> a[i][j];
    }
  }
  vector<point> ans;
  int cnt=0;

  for(int i=1;i<=H;i++){
    if(i%2==1){
      for(int j=1;j<=W;j++){
        if(a[i][j]%2==1){
          a[i][j]--;
          if(j==W){
            if(i==H){
              a[i][j]++;
              continue;
            }
            a[i+1][j]++;
            ans.push_back({i,j,i+1,j});
            cnt++;
            //cout << i << " " << j << " " << i+1 << " " << j << endl;
          }else{
            a[i][j+1]++;
            ans.push_back({i,j,i,j+1});
            cnt++;
            //cout << i << " " << j << " " << i << " " << j+1 << endl;
          }
        }
      }
    }else{
      for(int j=W;j>=1;j--){
        if(a[i][j]%2==1){
          a[i][j]--;
          if(j==1){
            if(i==H){
              a[i][j]++;
              continue;
            }
            a[i+1][j]++;
            ans.push_back({i,j,i+1,j});
            cnt++;
            //cout << i << " " << j << " " << i+1 << " " << j << endl;
          }else{
            a[i][j-1]++;
            ans.push_back({i,j,i,j-1});
            cnt++;
            //cout << i << " " << j << " " << i << " " << j-1 << endl;
          }
        }
      }
    }
  }

  cout << cnt << endl;
  for(auto itr=ans.begin();itr!=ans.end();itr++){
    cout << (*itr).a << " " << (*itr).b << " " << (*itr).c << " " << (*itr).d << endl;
  }

/*
  for(int i=1;i<=H;i++){
    for(int j=1;j<=W;j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  */
}
