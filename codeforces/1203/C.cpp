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

#define Fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
const int sz = 4e5 + 5;
ll n,ans = 0;
ll a[sz];

int main(){
    Fastio
    
    cin >> n;
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i];
		ans = __gcd(a[i], ans);
	}
	ll cnt = 0;
	for(ll i = 1;i*i<=ans;i++)
	{
		if(ans%i==0)
		{
			cnt++;
			if(ans/i != i)
				cnt++;
		}
	}
	cout << cnt;
    
    return 0;
}