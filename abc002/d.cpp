#include <bits/stdc++.h>
using namespace std;

int N,M;
bool co[15][15];

int main(){
	//初期化
	for(int i=0;i<15;i++)
		for(int j=0;j<15;j++)
			co[i][j] = false;

	cin >> N >> M;
	for(int i=0;i<M;i++)
	{
		int x,y;
		cin >> x >> y;
		x--,y--;
		co[x][y] = true;
		co[y][x] = true;
	}

	int ans = 0;
	for(int i=0;i<(1<<N);i++)
	{
		int tmp = 0;
		for(int j=0;j<N;j++)
			if( i&(1<<j) )
				tmp++;

		bool flag = true;
		for(int j=0;j<N;j++)
		{
			for(int k=0;k<N;k++)
			{
				if(j==k) continue;
				if( (i&(1<<j)) and (i&(1<<k)) )
				{
					if(!co[j][k])
						flag = false;
				}
			}
		}
		if(flag)
			ans = max(ans, tmp);
	}
	cout << ans << endl;
}
