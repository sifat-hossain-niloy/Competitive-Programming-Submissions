#include<bits/stdc++.h>
#include<stdio.h>

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
        ll n,mi = INT32_MAX,ev = 0,odd = 0;
        cin >> n;
        ll a[n];
        FL(n)
        {
            cin >> a[i];
            if(a[i]%2==0)
            {
                ev++;
                ll cnt = 0;
                for (int j = 0;j<31;j++)
                {
                    if(a[i] & 1<<j)
                    {
                        mi = min(mi,cnt);
                        //cout << "pausu" << i <<
                        break;
                    }
                    cnt++;
                }
            }
            else odd++;
            
        }
        if(ev==0) cout << 0 << endl;
       
        else 
        {
            ll ans = mi+ev-1;
            if(odd>0)
            {
                ans= min(ans,ev);
            }
            cout << ans << endl;

        }

    }
    
    return 0;
}