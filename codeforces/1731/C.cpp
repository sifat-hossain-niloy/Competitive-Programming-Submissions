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
        ll n;
        cin >> n;
        ll a[n];
        FL(n) cin >> a[i];
        
        vector<ll> squares;

        for (int i=0;i*i<=(2*n);i++)
        {
            squares.push_back(i*i);
        }

        ll x= 0,ans=(n*(n+1))/2;

        ll freq[2*n+10];
        memset(freq,0,sizeof(freq));
        freq[0]=1;

        for (int i=0;i<n;i++)
        {
            x^=a[i];
            for (auto v: squares)
            {
                if((x^v) >(2*n))continue;
                ans-=freq[x^v];
            }
            freq[x]++;
        }
        cout <<ans<<endl;

        
    }
    return 0;
}