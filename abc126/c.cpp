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
using namespace std;

int dy[]={1,-1,0,0,1,1,-1,-1,0};
int dx[]={0,0,1,-1,1,-1,1,-1,0};

int main(){
	ll N,K;
	cin >> N >> K;
	long double ans = 0;
	ll key = 1, c = 0;

	//初期化
	while(1){
		if(key>=K){
			break;
		}else{
			key *= 2;
			c++;
		}
	}
	cout << key << endl;
	cout << c << endl;
	for(ll i=1;i<=N;i++){
		//cout << c << endl;
		ans += ( 1/(long double)(1<<c));
		//cout << ans << endl;
		while(1){
			if((i+1)*key>=K){
				if(key==1){
					if((i+1)*key>=K){
						break;
					}else{
						key *= 2;
						c++;
						break;
					}
				}
				key /= 2;
				c--;
			}else{
				key *= 2;
				c++;
				break;
			}
		}
	}

	printf("%.9LF\n",ans/(long double)N);
}