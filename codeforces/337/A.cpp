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
    
    ll f[m] ,p[m+1];
    p[0] = 0;

    FL(m) 
    {
        cin >> f[i];
        
    }
    sort(f,f+m);

    

    ll ans = INT64_MAX;
    for (int i = 0;i<m;i++)
    {
        if(i+n-1<m)
        {
            ans  = min(ans,f[i+n-1]-f[i]);
        }
    }
    cout << ans << endl;

    	
    return 0;
}