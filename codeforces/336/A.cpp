#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;cin >> t;while(t--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
#define N               cout << "NO\n"
#define ff first
#define ss second
#define pb push_back
#define pf push_front

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("out.txt","w",stdout)

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a;
        b >>= 1;
    }
    return res;
}


int main(){
    Fastio
    
    ll n,m;
    cin >> n >> m;
    
    ll ans = abs(n)+abs(m);

    pair<ll,ll> p[2];

    p[0] = {ans,0};
    p[1] = {0,ans};

    if(n<0)p[0].ff*=-1;
    if(m<0)p[1].ss*=-1;

    if(p[0].ff>p[1].ff) swap(p[0],p[1]);
    cout << p[0].ff << " " << p[0].ss << " " << p[1].ff << " " << p[1].ss  << endl; 
    	
    return 0;
}