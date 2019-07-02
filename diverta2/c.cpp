#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main(){
	 ll M;
	 cin >> M;
	 vector<ll> a(M), p,m;
	 for(int i=0;i<M;i++){
			cin >> a[i];
			if(a[i]>=0) p.push_back(a[i]);
			else m.push_back(a[i]);
	 }
	 sort(a.begin(),a.end());

	 if(a[0]<0){
			ll ans = 0;
			ll mi = 0,pl = 0;
			for(int i=0;i<M;i++){
					if(a[i]<0) mi++;
					else pl++;
			}

			if(mi==1 && pl>=1){
				for(int i=0;i<M;i++){
					ans += llabs(a[i]);
				}
				cout << ans << endl;
				ll key = a[0];
				for(int i=1;i<M-1;i++){
					cout << key << " " << a[i] << endl;
					key = key - a[i];
				}
				cout << a[M-1] << " " << key << endl;
			}else if(pl==0){ //すべてマイナス
				ans = a[M-1];
				for(int i=0;i<=M-2;i++){
					ans += llabs(a[i]);
				}
				cout << ans << endl;
				ll key = a[M-1];
				for(int i=M-2;i>=0;i--){
					cout << key << " " << a[i] << endl;
					key = key - a[i];
				}
			}else if(mi>=2 && pl==1){
				ans = 0;
				for(int i=0;i<M;i++){
					ans += llabs(a[i]);
				}
				cout << ans << endl;
				ll key = a[M-1];
				for(int i=0;i<M-1;i++){
					cout << key << " " << a[i] << endl;
					key = key - a[i];
				}
			}else{//mi>=2 && pl>=2
				ans = 0;
				for(int i=0;i<M;i++){
					ans += llabs(a[i]);
				}
				cout << ans << endl;
				ll mkey = m[0], pkey = p[0];
				for(int i=1;i<p.size();i++){
					cout << mkey << " " << p[i] << endl;
					mkey = mkey - p[i];
				}
				for(int i=1;i<m.size();i++){
					cout << pkey << " " << m[i] << endl;
					pkey = pkey - m[i];
				}
				cout << pkey << " " << mkey << endl;
			}

	 }else{ //すべてプラス
			ll ans = -a[0];
			for(int i=1;i<M;i++){
					ans += a[i];
			}
			cout << ans << endl;
			ll key = a[0];
			for(int i=1;i<M-1;i++){
					cout << key << " " << a[i] << endl;
					key = key - a[i];
			}
			cout << a[M-1] << " " << key << endl;
	 }
}
