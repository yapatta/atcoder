#include <bits/stdc++.h>
using namespace std;

class UnionFind {
public:
    UnionFind(int64_t n) {
        //parが負の場合, このグループに属する要素数 * (-1)を示す
		//parが正の場合, 親の値を返す
        par_.resize(n, -1);
		// rankは木の深さ
		rank_.resize(n, 0);
    }
 
    //根を求める
    int64_t root(int64_t x) {
        return (par_[x] < 0 ? x : par_[x] = root(par_[x]));
    }
 
    //xとyの属する集合を併合
    void unite(int64_t x, int64_t y) {
        x = root(x);
        y = root(y);
        if (x == y) {
            return;
        }
 
		// xのサイズがyのサイズより大きいとき
		if(rank_[x] > rank_[y]) {
        	//要素数を足す(負の数だがそのまま足せば良い)
        	par_[x] += par_[y];
        	//yをxに繋げる
        	par_[y] = x;
		} else {
			par_[y] += par_[x];
			par_[x] = y;
			if(rank_[x] == rank_[y]) {
				rank_[y]++;
			}
		}
    }
 
    //xとyが同じ集合に属するか否かを判定
    bool same(int64_t x, int64_t y) {
        return (root(x) == root(y));
    }
 
    //xと同じ集合に属する要素数を返す
    int64_t size(int64_t x) {
        x = root(x);
        return -par_[x];
    }
private:
    vector<int64_t> par_;
	vector<int64_t> rank_;
};
 
