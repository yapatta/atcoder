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

signed
main(){
	int N,A,B,C,D;
	string s;
	cin >> N >> A >> B >> C >> D >> s;
	A--,B--,C--,D--;

	bool not_diwa = true;
	for(int i=A;i<=D;i++) {
			if(s[i]=='#' && s[i+1]=='#'){
					not_diwa = false;
					break;
			}
	}

	bool pass = false;
	for(int i=B-1;i<=D-1;i++) {
			if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.') {
					pass = true;
					break;
			}
	}

	if(C < D) {
			if(not_diwa) cout << "Yes" << endl;
			else cout << "No" << endl;
	}else {
			if(pass && not_diwa) cout << "Yes" << endl;
			else cout << "No" << endl;
	}
}
