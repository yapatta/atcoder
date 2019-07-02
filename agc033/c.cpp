#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
const ll MOD=1e9+7;
using namespace std;
const int dx[4]={-1, 0, 1, 0};
const int dy[4]={0, -1, 0, 1};

int n;
vector<vector<int> > br;
vector<int> dep;
vector<bool> done;

//点の深さを探索
void dfs(int id,int d)
{
	dep[id]=d+1;
	done[id]=true;
	for(int i=0;i<br[id].size();i++)
	{
		int nxid=br[id][i];
		if(done[nxid]==false)
			dfs(nxid,dep[id]);
	}
}


int main()
{
	cin >> n;
	br = vector<vector<int> >(n);
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin >> a >> b;
		a--;b--;
		br[a].push_back(b);
		br[b].push_back(a);
	}

	dep=vector<int>(n,1000000);
	done=vector<bool>(n,false);
	dfs(0,0);

  //直径の最長を求めたい!!
	int mx=0;
	int id=0;
	for(int i=0;i<n;i++)
		if(dep[i]>mx)
		{
			mx=dep[i];
			id=i;
		}

  dep=vector<int>(n,1000000);
	done=vector<bool>(n,false);
	dfs(id,0);
	int ans=0;

	for(int i=0;i<n;i++)
  {
    if(」[i]>ans) ans=dep[i];
  }
  ans--;

	cout << (ans%3==1 ? "Second":"First") << endl;
}
