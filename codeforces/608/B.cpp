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

ll sum[200005];


int main() {
	Fastio

	string a, b;
	cin >> a >> b;

	int sa = a.size(), sb = b.size();

	ll cnt = 0;

	for (int i = 0; i < sb ; i++)
	{
		if (b[i] == '1')cnt++;
		sum[i + 1] = cnt;

	}
	// reverse(a.begin(), a.end());
	// reverse(b.begin(), b.end());
	// for (int i = 0; i < sa ; i++)
	// {
	// 	for (int j = 0; j <= min(i, sa - 1 ); j++)
	// 	{
	// 		//cout << i << " " << j << endl;
	// 		if (b[i] != a[j])ans++;
	// 	}
	// }
	ll ans = 0;

	for (int i = 0; i < sa; i++)
	{
		ll x = sum[i + 1 + sb - sa] - sum[i];
		if (a[i] == '0') ans += x;
		else ans += (sb - sa - x + 1);
	}


	cout << ans << endl;
	return 0;
}