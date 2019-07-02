#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int H,W;
vector<string> s;

int dy[] = {1,-1,0,0};
int dx[] = {0,0,1,-1};

int bfs(int y, int x)
{
		int retval = 1;
		queue<tuple<int,int,int> > q;
		for(int i=0;i<4;i++){
				if(0<=y+dy[i] && y+dy[i]<H && 0<=x+dx[i] && x+dx[i]<W)
				{
						q.push(make_tuple(y+dy[i],x+dx[i],i));
				}
		}

		while(!q.empty())
		{
				tuple<int,int,int> key = q.front();
				int by = get<0>(key);
				int bx = get<1>(key);
				int direction = get<2>(key);
				q.pop();
				if(s[by][bx]=='#'){
						continue;
				}
				retval++;
				if(0<=by+dy[direction] && by+dy[direction]<H && 0<=bx+dx[direction] && bx+dx[direction]<W)
				{
						q.push(make_tuple(by+dy[direction],bx+dx[direction],direction));
				}

		}
		return retval;
}

signed
main(){
		cin >> H >> W;
		s = vector<string>(H);
		for(int i=0;i<H;i++)
		{
				cin >> s[i];
		}
		int ans = 0;
		for(int y=0;y<H;y++){
				for(int x=0;x<W;x++)
				{
						if(s[y][x]=='#') continue;
						//cout << bfs(y,x) << endl;
						ans = max(ans, bfs(y,x));
				}
		}
		cout << ans << endl;
}
