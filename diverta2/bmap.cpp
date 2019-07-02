#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main(){
		int N;
		cin >> N;
		vector<ll> x(N),y(N);
		map<pair<ll,ll>, int> sa;

		for(int i=0;i<N;i++){
				cin >> x[i] >> y[i];
		}

		for(int i=0;i<N;i++){
				for(int j=i+1;j<N;j++){
						sa[make_pair(x[i]-x[j], y[i]-y[j])]++;
						sa[make_pair(x[j]-x[i], y[j]-y[i])]++;
				}
		}

		int max_pair = 0;
		for(auto p : sa){
				max_pair = max(max_pair, p.second);
		}
		cout << N - max_pair << endl;
}
