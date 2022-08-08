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


int main() {
	Fastio

	//priority_queue<ll> q;

	int n, m;
	cin >> n >> m;

	ll a[n], sum = 0;

	FL(n) cin >> a[i];


	map<ll, ll> mp;

	for (int i = 0; i < n; i++)
	{
		ll ans  = 0;
		ll lagbe = m - a[i];
		if (sum <= lagbe)
		{
			cout << 0 << " ";
			sum += a[i];
			mp[a[i]]++;
			continue;
		}
		ll rem = sum - lagbe;

		for (int j =  100; j >= 1; j--)
		{

			ll x = (rem + j - 1) / j;

			ans += min(x, mp[j]);

			rem -= min(x, mp[j]) * j;
			if (rem <= 0)
			{
				break;
			}
		}
		sum += a[i];
		mp[a[i]]++;
		cout << ans << " ";


	}
	cout << endl;

	return 0;
}