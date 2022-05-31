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

long long
binpow (long long a, long long b)
{
  long long res = 1;
  while (b > 0)
    {
      if (b & 1)
	res = res * a % MOD;
      a = a * a;
      b >>= 1;
    }
  return res;
}


int
main ()
{
  //Fastio

  int t;
  cin >> t;
  while (t--)
    {
      int n, e = 0, o = 0;
      cin >> n;
      ll a[n];
      FL (n)
      {
	cin >> a[i];
      }
      int b[n];
      int now = a[0], cnt = 0, hobe = 1;
      for (int i = 0; i < n; i++)
	{
	  b[i] = i;
	  if (a[i] == now)
	    {
	      cnt++;
	    }
	  else
	    {
	      if (cnt == 1)
		{
		  hobe = -1;

		}
	      now = a[i];
	      cnt = 1;
	    }
	}
	if(cnt==1) hobe = -1;

      for (int i = 1; i < n; i++)
	{
	  if (a[i] == a[i - 1])
	    {
	      swap (b[i], b[i - 1]);
	    }
	}

      if (hobe == -1 || n == 1)
	{
	  cout << -1 << endl;
	}
      else
	{
	  for (int i = 0; i < n; i++)
	    {
	      cout << b[i] + 1 << " ";
	    }
	  cout << endl;
	}


    }

  return 0;
}
