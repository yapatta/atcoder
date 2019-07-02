#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int com(string a, string b) {
  int i,count=0;
  for(i=0;i<a.size();i++) {
    if(a[i]==b[i]) count++;
  }
  return count;
}

int main() {
  int i, lsize, ssize;
  string a,b,l,s;
  cin >> a >> b;

  //長さが長い方をl,短い方をs
  if(a.size() > b.size()) {
    l = a;
    s = b;
    lsize = l.size();
    ssize = s.size();
  } else {
    l = b;
    s = a;
    lsize = l.size();
    ssize = s.size();
  }
  string sub;
  int max=0;
  for(i=0;i<=lsize-ssize;i++) {
    sub = l.substr(i, ssize);
    int c = com(sub, s);
    if(max <= c) {max=c;}
  }
  int ans=(lsize-ssize)+(ssize-max);
  cout << ans << endl;

  return 0;
}
