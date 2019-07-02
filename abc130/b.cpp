#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N,X;
	cin >> N >> X;
	int key = 0;
	int ans = 0;
	for(int i=0;i<N;i++){
			int l;
			cin >> l;
			if(key <= X) ans++;
			key += l;
	}
	if(key <= X) ans++;
	cout << ans << endl;

}
