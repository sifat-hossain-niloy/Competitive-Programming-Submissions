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

    TC(t)
    {
        ll n,m;
        cin >> n >> m;

        ll ans = (m*(m+1)*n);

        ll pos[n] ,val[n];

        map<ll,ll> mp;
        
        FL(n)
        {
            cin >> val[i];
            pos[i] = 0;
        }

        FL(m)
        {
            ll p,v;
            cin >> p >> v;

            mp[val[p-1]]+=(i+1-pos[p-1]);
            pos[p-1] = i+1;
            val[p-1] = v;
        }

        FL(n)
        {
            mp[val[i]]+=(m+1-pos[i]);
        }
        for (auto x : mp)
        {
            ans-=(x.ss*(x.ss-1)/2);
        }
        cout<<  ans << endl;

    }
    
    return 0;
}