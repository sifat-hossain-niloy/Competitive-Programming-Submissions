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

ll n,ans =0;
cin >> n;

ll a[n];
for (int i = 0;i<n;i++)
{
    cin >> a[i];
    ans+=a[i];
}


for (int i = 1;i<(n+1)/2;i++)
{
    if(n%i==0)
    {
        
        for (int j = 0;j<i;j++)
        {
            ll x = 0;
            for (int k = j ;k<n;k+=i)
            {
                x+=a[k];
            }
            ans  = max(x,ans);
        }
    }
    
}
cout << ans << endl;
return 0;
}



