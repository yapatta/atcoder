#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
const ll INF=1e10+1;
using namespace std;
#define NOT_EXIST -1

int dy[]={1,-1,0,0,1,1,-1,-1,0};
int dx[]={0,0,1,-1,1,-1,1,-1,0};

int main(){
	ll Q;
	cin >> Q;

	ll las = 0;
	map<ll,ll> key;
	for(ll i=0;i<Q;i++){
		int q;
		cin >> q;
		if(q==1){
			ll  a,b;
			cin >> a >> b;
			key[i] = a;
			kans += a;
			las += b;
		}else if(q==2){
			if(key.size()<=1){
				cout << key.begin()->second << " " << las << endl;
			}else{
				ll m = (key.begin()->second+key.rbegin()->second) / 2;
				
				cout <<  <<  << endl;
			}
		}
	}
}