#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	priority_queue< pair<int,int>, vector<pair<int,int> > > pq;
	pq.push({2,5});
	pq.push({4,5});
	pq.push({5,5});
	cout << pq.top().first << endl;

}
