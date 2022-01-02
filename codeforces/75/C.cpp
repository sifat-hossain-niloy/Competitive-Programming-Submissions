#include <bits/stdc++.h>

#define deb(x) cout<<#x<<"="<<x<<'\n'
#define MOD 1000000007
#define ll long long int
#define fr(a,b) for(int i=a;i<b;i++)
#define fr1(a,b) for(int j=a;j<b;j++)


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
using namespace std;
int main() {
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    ll a,b;
    cin >> a >> b;
    ll g = __gcd(a,b);
    
    ll n;
    cin >> n;
    for (int xd= 0 ;xd<n;xd++)
    {
        ll l,r, ans ;
        cin >> l >> r;
        if(l>g)
        {
            ans  = -1;
        }
        else if(g<=r && g>=l)
        {
            ans = g;
        }
        else{
            ll x = g/r;
            for (int i = x;;i++)
            {
                if(g%i==0 && (g/i)<=r && (g/i)>=l)
                {
                    ans = g/i;
                    break;
                }
                else if(g/i < l )
                {
                    ans  = -1;
                    
                    break;
                }
            }
            //deb(n);
            
        }
        cout << ans << endl;
    }


return 0;
}


