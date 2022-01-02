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

ll a[n],b[n],c[n];

fr(0,n)
{
cin >> a[i];

}
b[0] = a[0];
c[n-1] = a[n-1];
fr(1,n)
{
    b[i] = b[i-1]+a[i];
}
for (int i = n-2;i>=0;i--)
{c[i] = c[i+1]+a[i];
}
for (int i = 0;i<n;i++)
{
    if(b[i]==c[i])
    {
        ans = i;
        break;
    }
    else if(b[i]>c[i])
    {
        ans = i-1;
        break;
    }
}
cout << ans+1 << " " << (n-ans -1) << endl;
return 0;
}


