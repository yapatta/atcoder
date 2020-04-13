#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	vector<int> A(6);
	for(auto &a : A) cin >> a;
	sort(A.rbegin(), A.rend());
	cout << A[2] << endl;
}
