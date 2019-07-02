#include <bits/stdc++.h>
using namespace std;

//やってること
//ある頂点aから伸びる辺が一本の場合、伸びている点bにおいて、接続されているaを消去する
//そして、ansの値を1増やす
//もし、辺を持つ頂点の数が、2つの場合、
//どの頂点からも1本も辺が伸びていない場合、探索は終了する
//
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> a(M), b(M);
    vector<vector<int> > connect(N, vector<int>());
    for (int i = 0; i < M; ++i) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        connect[a[i]].push_back(b[i]);
        connect[b[i]].push_back(a[i]);
    }

    int ans = 0;
    while (true) {
        vector<int> grade1;
        for (int i = 0; i < N; ++i) {
            if (connect[i].size() == 0) {
                continue;
            }
            if (connect[i].size() == 1) {
                //次数が1のものを記録する
                grade1.push_back(i);
            }
        }
        if(grade1.size() != 0) {
            for(int g : grade1) {
                //grade1で存在するのは、connect[g].size()==1のときだけ
                //connect[g]はsize() == 1
                //connect[g][0]が繋がった先
                //そこからgを探して削除

                //↓残り一個になったとき, 強制終了
                if(connect[connect[g][0]].size()==0) continue;
                auto itr = std::find(connect[connect[g][0]].begin(), connect[connect[g][0]].end(), g);
                connect[connect[g][0]].erase(itr);
                connect[g].clear();
                ans++;
            }
        } else {
            //次数0のものがなくなっていれば終わり
            break;
        }
    }
    cout << ans << endl;
}
