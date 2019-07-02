#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 100005
using namespace std;
const ll MOD=1e9+7;

int a[26]={};
int main(){
  string s;
  cin >> s;
  vector<pair<int,char> > ans;
  int count=1;
  char key=s[0];
  for(int i=1;i<s.size();i++){
    if(key==s[i]){
      count++;
    }else{
      ans.push_back(make_pair(count, key));
      key=s[i];
      count=1;
    }
  }
  ans.push_back(make_pair(count, key));
  for(int i=0;i<ans.size();i++){
    cout << ans[i].second << ans[i].first;
  }
  cout << endl;
}
