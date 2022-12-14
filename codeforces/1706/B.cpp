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
        ll n;
        cin >> n;
        ll a[n];
        FL(n) cin >> a[i];

        vector<pair<ll,ll>> v(n+1);
        for (int i = 1;i<=n;i++)
        {
            v[i].first = -1;
            v[i].second = 0;
        }

        for (int i = 0;i<n;i++)
        {
            if(v[a[i]].first==-1)
            {
                v[a[i]].first = i;
                v[a[i]].second++;
            }
            else{
                if((i-(v[a[i]].first))%2)
                {
                    v[a[i]].second++;
                    v[a[i]].first = i;
                }
            }
        }
        for (int i = 1;i<=n;i++)
        {
            cout << v[i].second << " ";
        }
        cout << endl;
        
        
    }
    
    return 0;
}