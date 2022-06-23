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
    
    int t = 1;
    while(t--)
    {
        int n;
        cin >> n;
        ll a[n+1];
        ll b[n+1];
        FL(n) cin >> a[i+1];
        b[0] = 0;

        for (int i = 1;i<=n;i++)
        {
            b[i] = b[i-1]+a[i];
            //cout << b[i] << " ";
        }
        if(b[n]%3!=0)
        {
            cout << 0 << endl;
            continue;
        }
        ll cnt [n+1];
        for (int i = 1;i<=n;i++)
        {
            if((b[n]-b[i-1])== b[n]/3)cnt[i] = 1;
            else cnt[i] = 0;
        }
        int sum [n+1];
        sum[n] = cnt[n];
        for (int i = n-1;i>0;i--)
        {
            sum[i] = sum[i+1]+cnt[i];
        }

        // for (int i = 1;i<=n;i++)
        // {
        //     cout << sum[i] << " ";
        // }
        ll ans = 0;
        for (int i = 1;i<n-1;i++)
        {
            if(b[i]==b[n]/3)ans+=sum[i+2];
        }
        cout << ans << endl;
        
        //cout << ans << endl;
    }
    
    return 0;
}