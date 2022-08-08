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
ll dp[101][101];


int main() {
	Fastio


	int n, m;
	cin >> n >> m;

	int t[n];
	FL(n) cin >> t[i];

	memset(dp, 0, sizeof(dp));

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (j >= t[i - 1])
			{
				dp[i][j] = max(1 + dp[i - 1][j - t[i - 1]], dp[i - 1][j]);
			}
			else {
				dp[i][ j ] = dp[i - 1][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << i  - dp[i][m - t[i]] << " ";
	}
	cout << endl;


	return 0;
}