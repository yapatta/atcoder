#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  int N,K;
  cin >> N >> K;
  int num[11]={};
  //好きな数字は0嫌いな数字は1
  for(int i=0;i<K;i++) {
    int d;
    cin >> d;
    num[d]=1;
  }
  vector<int> A;
  for(int i=0;i<10;i++) {
    if(num[i]==0) {
      A.push_back(i);
    }
  }
  queue<int> S;
  S.push(0);
  while(1) {
    int num=S.front();
    S.pop();
    if(num>=N) {
      cout << num << endl;
      return 0;
    }
    for(int i=0;i<A.size();i++) {
      S.push(num*10+A[i]);
    }
  }
}
