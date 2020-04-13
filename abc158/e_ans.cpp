#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll power(int a,int b,int c){
    ll res=1;
    while(b){
        if(b&1)res=res*a%c;
        a=a*a%c;
        b/=2;
    }
    return res;
}

int main(){
    int n,p;string s;
    cin>>n>>p>>s;
    ll ans=0;
    if(p==2||p==5){
        for(int i=0;i<n;i++)if((s[i]-'0')%p==0)ans+=i+1;
        cout<<ans<<endl;return 0;
    }
    map<int,ll> m;
    vector<ll> v(n+1,0);
    for(int i=1;i<=n;i++){
        v[i]=(v[i-1]+(s[n-i]-'0')*power(10ll,i-1,p))%p;
    }
    for(int i=0;i<=n;i++)m[v[i]]++;
    for(auto x=m.begin();x!=m.end();x++){
        ans+=(x->second)*(x->second-1)/2;
    }
    cout<<ans;
}
