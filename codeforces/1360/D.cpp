#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<vector>
#include<set>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;cin >> t;while(t--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
#define N               cout << "NO\n"

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
bool isPrime(long long n)
{
  if (n == 1)
  {
    return false;
  }
  int i = 2;
  while (i*i <= n)
  {
      if (n % i == 0)
      {
          return false;
      }
      i += 1;
  }
  return true;
}

int main(){
    
    TC(t)
    {
        ll n,k;
        cin >> n >> k;
        ll ans;
        vector<int> v;

        for (int i = 1;i*i<=n;i++)
        {
            if (n%i==0 && i<=k)
            {
                v.push_back(i);
                if ((n/i)<=k)
                v.push_back(n/i);
            }
        }
        sort(v.begin(),v.end());
        cout << n/v.back() << endl;

    }

    return 0;
}
