#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using piii = pair<int, pii>;

constexpr int MOD = 1'000'000'007;
constexpr int INF = 1'000'000'001;

vector<int> g[100'000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(10);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int a, b;
        cin >> a >> b;
        --a; --b;
        g[a].push_back(b);
    }
    int s, t;
    cin >> s >> t;
    --s; --t;
    vector<vector<int>> d(n, vector<int>(3, INF));
    d[s][0] = 0;
    priority_queue<piii, vector<piii>, greater<piii>> que;
    que.push({0, {s, 0}});
    while(!que.empty()){
        auto p = que.top(); que.pop();
        int a = p.second.first;
        int cost = p.first;
        int mod = p.second.second;
        if(d[a][mod] < cost) continue;
        for(auto && e : g[a]){
            int nmod = (mod+1) % 3;
            if(cost + 1 < d[e][nmod]){
                d[e][nmod] = cost + 1;
                que.push({cost+1, {e, nmod}});
            }
        }
    }
    if(d[t][0] == INF){
        cout << "-1\n";
    }
    else cout << d[t][0] / 3 << "\n";
    return 0;
}

