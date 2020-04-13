#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9;

int h, w;
bool s[21][21] = {}, done[21][21] = {};

int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};

int main()
{
	cin >> h >> w;
	for (int i = 0; i < h; i++)
	{
		string tmp;
		cin >> tmp;
		for (int j = 0; j < w; j++)
		{
			if (tmp[j] == '.')
			{
				s[i][j] = 1;
			}
			else
			{
				s[i][j] = 0;
			}
		}
	}

	int ans = 0;
	for (int sy = 0; sy < h; sy++)
	{
		for (int sx = 0; sx < w; sx++)
		{
			vector<vector<int>> tmp_dist(h, vector<int>(w, INF));
			if (s[sy][sx] == 0)
			{
				continue;
			}
			for (int i = 0; i < 20; i++)
				for (int j = 0; j < 20; j++)
					done[i][j] = false;

			queue<pair<int, int>> q;
			q.push(make_pair(sy, sx));
			tmp_dist[sy][sx] = 0;
			done[sy][sx] = true;
			while (!q.empty())
			{
				auto now = q.front();
				q.pop();
				for (int i = 0; i < 4; i++)
				{
					int ny = now.first + dy[i];
					int nx = now.second + dx[i];
					if (!done[ny][nx] && s[ny][nx] && 0 <= ny && ny < h && 0 <= nx && nx < w)
					{
						done[ny][nx] = true;
						tmp_dist[ny][nx] = min(tmp_dist[ny][nx], tmp_dist[now.first][now.second] + 1);
						q.push(make_pair(ny, nx));
					}
				}
			}
			int tmp_ans = 0;
			for (int i = 0; i < h; i++)
			{
				for (int j = 0; j < w; j++)
				{
					if (!s[i][j])
						continue;
					tmp_ans = max(tmp_ans, tmp_dist[i][j]);
				}
			}
			ans = max(ans, tmp_ans);
		}
	}
	cout << ans << endl;
}
