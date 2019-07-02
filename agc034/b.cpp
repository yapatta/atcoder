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
	string s;
	cin >> s;
	int st = 0;

	vector<pair<pair<int,int>, pair<int,int> > > key;
	while(st < s.size()){
		if(s[st]=='A'){
			int a = 1;
			int bc = 0;
			int en = st+1;
			//連続するAの個数を求める
			while(1){
				if(s[en]=='A'){
					a++;
					en++;
				}else{
					break;
				}
			}
			//連続するBCの個数を求める
			while(1){
				if(s[en]=='B' && s[en+1]=='C'){
					bc++;
					en += 2;
				}else{
					break;
				}
			}
			if(bc==0) {
				st++;
				continue;
			}
			key.pb(make_pair(make_pair(a,bc), make_pair(st,en)));
			st = en;
		}else{
			st++;
		}
	}
	if(key.size()==0){
		cout << 0 << endl;
		return 0;
	}else if(key.size()==1){
		cout << key[0].first.first * key[0].first.second << endl;
		return 0;
	}

	key.push_back({{-1,-1},{-1,-1}});

	vector<vector<pi> > seq(key.size());
	int num = 0;
	for(int i=0;i<key.size()-1;i++){
		if(key[i].second.second == key[i+1].second.first){
			seq[num].push_back({key[i].first.first,key[i].first.second});
		}else{
			seq[num].push_back({key[i].first.first,key[i].first.second});
			num++;
		}
	}

	int ans = 0;

	for(int i=0;i<num;i++){
		int N = seq[i].size();
		int tmp = seq[i][N-1].second;
		ans += (seq[i][N-1].first * tmp);

		for(int j=1;j<seq[i].size();j++){
			tmp += seq[i][N-1-j].second;
			ans += (seq[i][N-1-j].first * tmp);
		}
	}

 	printf("%d\n", ans);
}