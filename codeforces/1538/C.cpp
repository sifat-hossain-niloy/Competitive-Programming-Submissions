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
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

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
ll n;
ll a[200005];
ll bin(ll dorkar,ll i)
{
    ll hi = n-1,lo= i+1,ans = -1;
    ll mid ;

    while(lo<=hi)
    {
        mid = (lo+hi)/2;

        if(a[mid]<=dorkar)
        {
            ans = mid;lo = mid+1;
        }
        else {
            hi = mid-1;
        }
    }
    return max(0LL,ans-i);
}


int main(){
    Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        int l,r;
        cin >> n >> l >>r;

        ll ans = 0;
        FL(n) cin >> a[i];

        sort(a,a+n);

        for(int i=0; i<n; i++) {

            ll lx = l-a[i], ry=r-a[i];
            ans+=bin(ry, i)-bin(lx-1, i);
        }
        cout << ans << endl;
    }
    
    return 0;
}