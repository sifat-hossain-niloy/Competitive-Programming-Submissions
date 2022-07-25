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


int main(){
    Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll a[n];
        FL(n)
        {
            cin >> a[i];
        }     
        ll ans = 0;
        for (int i = 1;i<n;i++)
        {
            if(max(a[i],a[i-1])>2*min(a[i],a[i-1]))
            {
                ll d = max(a[i],a[i-1])/min(a[i],a[i-1]);
                ll x = min(a[i],a[i-1]);
                while(x*2<max(a[i],a[i-1]))
                {
                    ans++;
                    x*=2;
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}