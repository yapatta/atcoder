#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> b(N),a;
  rep(i,N){
    cin >> b[i];
  }

  while(b.size() > 0){
    auto it=b.begin(),mItr=b.begin()-1;
    int max = 0;
    int count=0;

    while(it != b.end()){
      if(count+1 == *it){
        if(max <= *it) {
          mItr = it;
          max = *it;
        }
      }
      count++;
      it++;
    }

    //ラストが1じゃないときはエラーというバリデーションが間違っていた
    if(mItr == b.begin()-1){
      cout << -1 << endl;
      return 0;
    }

    a.push_back(max);
    b.erase(mItr);
    if(b.size()==0) break;
  }
  rep(i,a.size()){
    cout << a[a.size()-1-i] << endl;
  }
}
