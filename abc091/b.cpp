#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main() {
  int i,N;
  cin >> N;
  vector< pair<int,string> > A;
  for(i=0;i<N;i++) {
    string former;
    cin >> former;
    bool flag=false;
    int num;
    for(num=0;num<A.size();num++) {
      if(A[num].second==former) {
        flag=true;
        break;
      }
    }
    if(flag) {
      A[num].first++;
    } else {
      A.push_back(make_pair(1,former) );
    }
  }

  int M;
  cin >> M;
  for(i=0;i<M;i++) {
    string later;
    cin >> later;
    int num;
    for(num=0;num<A.size();num++) {
      if(A[num].second==later) {
        if(A[num].first>0) A[num].first--;
        break;
      }
    }
  }
    sort(A.begin(),A.end());
    cout << A[A.size()-1].first << endl;
}
