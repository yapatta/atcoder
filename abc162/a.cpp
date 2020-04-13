#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	string N;
	cin >> N;
	bool flag = false;
	for(int i=0;i<N.size();i++)
		if(N[i] == '7')
			flag = true;
	cout << (flag ? "Yes" : "No") << endl;
}
