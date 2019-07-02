#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int H,W;
vector<string> s;

int dy[] = {1,-1,0,0};
int dx[] = {0,0,1,-1};


signed
main(){
		cin >> H >> W;
		s = vector<string>(H);
		for(int i=0;i<H;i++)
		{
				cin >> s[i];
		}
		vector<vector<int>> up(H,vector<int>(W,0)); 
		vector<vector<int>> down(H,vector<int>(W,0)); 
		vector<vector<int>> left(H,vector<int>(W,0)); 
		vector<vector<int>> right(H,vector<int>(W,0)); 

		for(int x=0;x<W;x++){
				for(int y=1;y<H;y++)
				{
						if(s[y][x]=='.')
						{
								if(s[y-1][x]=='.')
										up[y][x] = up[y-1][x] + 1;
								else
										up[y][x] = 0;
						}else{
								up[y][x] = 0;
						}
				}
		}
		
		for(int x=0;x<W;x++){
				for(int y=H-2;y>=0;y--)
				{
						if(s[y][x]=='.')
						{
								if(s[y+1][x]=='.')
										down[y][x] = down[y+1][x] + 1;
								else
										down[y][x] = 0;
						}else{
								down[y][x] = 0;
						}
				}
		}
		
		for(int y=0;y<H;y++){
				for(int x=1;x<W;x++)
				{
						if(s[y][x]=='.')
						{
								if(s[y][x-1]=='.')
										left[y][x] = left[y][x-1] + 1;
								else
										left[y][x] = 0;
						}else{
								left[y][x] = 0;
						}
				}
		}

		for(int y=0;y<H;y++){
				for(int x=W-2;x>=0;x--)
				{
						if(s[y][x]=='.')
						{
								if(s[y][x+1]=='.')
										right[y][x] = right[y][x+1] + 1;
								else
										right[y][x] = 0;
						}else{
								right[y][x] = 0;
						}
				}
		}




		int ans = 0;
		for(int y=0;y<H;y++){
				for(int x=0;x<W;x++)
				{
						if(s[y][x]=='#') continue;
						//cout << bfs(y,x) << endl;
						//cout << up[y][x] << " " << down[y][x] << " " << left[y][x] << " " << right[y][x] << endl;

						ans = max(ans, 1+up[y][x]+down[y][x]+left[y][x]+right[y][x]);
				}
		}
		cout << ans << endl;
}
