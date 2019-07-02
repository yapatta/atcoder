#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main(){
	string s;
	cin >> s;
	map<char,int> a;
	for(int i=0;i<4;i++){
		a[s[i]]++;
	}
	bool flag = true;
	if(a.size()==2){
		for(auto b : a){
			if(b.second!=2) flag = false;
		}
	}else{
		flag = false;
	}
	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
}
