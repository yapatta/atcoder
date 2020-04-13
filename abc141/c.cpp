#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
 int n,k,q;
 cin >> n >> k >> q;
 vector<int> flag(n,0);
 vector<int> ans(n, k);
 for(int i=0;i<q;i++) {
	 int a;
	 cin >> a;
	 a--;
	 flag[a]++;
 }
 for(int i=0;i<n;i++) {
	 ans[i] -= (q-flag[i]);
 }
 for(int i=0;i<n;i++) {
	 if(ans[i]<=0) cout << "No" << endl;
	 else cout << "Yes" << endl;
 }
}
