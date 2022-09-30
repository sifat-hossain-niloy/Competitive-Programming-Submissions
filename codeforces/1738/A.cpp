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
        int n;
        cin >> n;
        vector<ll> a,b;
        ll arr[n];

        FL(n)
        {
            cin >> arr[i];
        }
        FL(n)
        {
            ll x;
            cin >> x;
            if(arr[i]==0) a.push_back(x);
            else b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        ll ans = 0,sz = min(a.size(),b.size());
        
        int i = 0;
        if(a.size()==b.size())
        {
            while(i<sz-1)
            {
                ans+=( 2*(a.back()+b.back()));
                a.pop_back();
                b.pop_back();
                i++;
            }
            ans+=2*max(a.back(),b.back());
            ans+=min(a.back(),b.back());
        }
        else {
            while(i<sz)
            {
                ans+=(2*(a.back()+b.back()));
                a.pop_back();b.pop_back();
                i++;
            }
            while(!a.empty())
            {
                ans+=a.back();
                a.pop_back();
            }
            while(!b.empty())
            {
                ans+=b.back();b.pop_back();
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}