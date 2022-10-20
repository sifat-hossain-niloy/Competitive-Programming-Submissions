
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
int com(char x)
{
	if(x=='L')return 2;
	else if(x=='M') return 1;
	return 0;
}


int main(){
    Fastio
    
    TC(t)
    {
        ll n;
        cin >> n;ll a[n];
        map<ll,ll> mp;

        FL(n)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll nb = (n+1)/2;

        ll ans = 0;

        for (ll i = 1;i<=nb;i++)
        {
            ll cnt = i;
            for (ll j = i;j>1;j--)
            {
                if(mp[j]>0 && j==cnt)cnt--;

                else if(cnt>j && mp[j]>0)
                {
                    cnt-=min(cnt-j+1,mp[j]);
                }
            }
            if((mp[1]-i+cnt)>=(2*cnt -1))
            {
                ans = max(ans,i);
            }


        }

        cout << ans << endl;


    }
    
    return 0;
}