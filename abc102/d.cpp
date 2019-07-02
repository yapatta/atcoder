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
	ll N;
	cin >> N;
	vector<ll> a(N), l(N+1),r(N+1);
	rep(i,N){
		cin >> a[i];
	}
	l[0] = 0;
	r[0] = 0;
	for(ll i=0;i<N;i++){
		l[i+1] = l[i] + a[i];
		r[i+1] = r[i] + a[N-1-i];
	}
	//まず2分割しようか
	pair<ll,ll> half = make_pair(llabs(l[0]-r[N]), 0);
	for(ll i=1;i<=N;i++){
		if(half.first > llabs(l[i]-r[N-i]) ){
			half.first = llabs(l[i]-r[N-i]);
			half.second = i;
		}
	}
	cout << half.second << endl;
	ll lsum=0,rsum=0;
	for(ll i=0;i<half.second;i++){
		lsum += a[i];
	}
	for(ll i=half.second;i<N;i++){
		rsum += a[i];
	}


	pair<ll,ll> lans = make_pair(l[0], lsum-l[0]);
	pair<ll,ll> rans = make_pair(r[0], rsum-r[0]);

	for(ll i=0;i<=half.second;i++){
		ll sa = llabs( (lsum-l[i]) - l[i] );
		if( sa < llabs(lans.first - lans.second) ){
			lans.first = l[i];
			lans.second = lsum-l[i];
		}
	}

	for(ll i=0;i<=N-half.second;i++){
		ll sa = llabs( (rsum-r[i]) - r[i] );
		if( sa < llabs(rans.first - rans.second) ){
			rans.first = r[i];
			rans.second = rsum-r[i];
		}
	}
	cout << lans.first << " " << lans.second << endl;
	cout << rans.first << " " << rans.second << endl;
	vector<ll> four;
	four.push_back(lans.first);
	four.push_back(lans.second);
	four.push_back(rans.first);
	four.push_back(rans.second);
	sort(All(four));
	cout << four[3]-four[0] << endl;
}