#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int N;
vector<string> res;

void rec(string s) {
  if(s.length() == N) {
    res.push_back(s);
    return ;
  }
  for (char ch = 'a'; ch <= 'c'; ch++) {
    rec(s+ch);
  }
  return ;
}
int main(void) {
  scanf("%d", &N);
  rec("");
  for(int i = 0;i <res.size(); i++)
    printf("%s\n", res[i].c_str());
  return 0;
}
