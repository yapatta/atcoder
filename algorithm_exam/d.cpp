#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N;
	cin >> N;
	vector<int> A(N);
	for(auto &a : A) cin >> a;
	sort(A.begin(), A.end());
	int before = -1, after = -1;
	vector<int> n(N+1, 0);
	for(int i=0;i<N;i++) {
		n[A[i]]++;
	}
	for(int i=1;i<=N;i++) {
		if(n[i] == 0) before = i;
		if(n[i] == 2) after = i;
	}
	if(before == -1 and after == -1) cout << "Correct" << endl;
	else cout << after << " " << before << endl;
}
