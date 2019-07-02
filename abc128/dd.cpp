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
		int N,K;
		cin >> N >> K;
		vector<int> v(N);
		rep(i,N){
				cin >> v[i];
		}
		int ans = INT_MIN;

		for(int take = 0;take<=min(N,K);take++) {
				for(int left = 0;left <= take;left++) {
						vector<int> tmp;
						int right = take - left;
						for(int i = 0;i < left;i++) {
								tmp.push_back(v[i]);
						} 
						for(int i = 0;i < right;i++) {
								tmp.push_back(v[N-1-i]);
						}
						sort(All(tmp));
						int minus_max = K - take;
						int t_sum = 0;
						int minus = 0;
						for(int i = 0; i < tmp.size();i++) {
								if(tmp[i] < 0 && minus < minus_max){
										minus++;
										continue;
								}
								t_sum += tmp[i];
						}
						ans = max(ans, t_sum);
						
				}
		}
		cout << ans << endl;
}
