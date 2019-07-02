#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9+7;

int N,M;
int dist[305][305];
signed
main(){
	cin >> N >> M;
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
		{
			dist[i][j] = INF;
			if(i==j) dist[i][j] = 0;
		}

	for(int i=0;i<M;i++)
	{
		int a,b,t;
		cin >> a >> b >> t;
		a--,b--;
		dist[a][b] = t;
		dist[b][a] = t;
	}
	
	for(int m=0;m<N;m++)
	{
		for(int a=0;a<N;a++)
		{
			for(int b=0;b<N;b++)
			{
				dist[a][b] = min(dist[a][b], dist[a][m]+dist[m][b]);
			}
		}
	}

	int ans = INF;
	for(int i=0;i<N;i++)
	{
		int tmpans = 0;
		for(int j=0;j<N;j++)
		{
			if(i==j) continue;
			if(tmpans < dist[i][j])
				tmpans = dist[i][j];
		}
		if(tmpans < ans)
			ans = tmpans;
	}

	cout << ans << endl;
}
