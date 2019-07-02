#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
#define KEY 10007
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<pair<int,string> > a;
  rep(i,N){
    string tmp;
    cin >> tmp;
    int j=0;
    while(j<a.size()){
      if(tmp==a[j].second) break;
      j++;
    }
    if(j==a.size()) a.push_back(make_pair(1,tmp));
    else{
      for(int i=0;i<a.size();i++){
        if(a[i].second==tmp){
          a[i].first++;
          break;
        }
      }
    }
  }
  sort(All(a));
  cout << a[a.size()-1].second << endl;
}
