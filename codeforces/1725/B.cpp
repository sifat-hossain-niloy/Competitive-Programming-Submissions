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
    
    ll n,d;
    cin >> n >> d;
    // ll ans= 0;
    ll a[n];
    FL(n)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    ll ans=0,j = 0;
    for (int i = n-1;i>=0;i--)
    {
        ll lagbe = (d+a[i])/a[i];
        if(j+lagbe<=n)
        {
            ans++;
            j+=lagbe;
        }
        else break;
    }
    cout << ans << endl;
    
    return 0;
}