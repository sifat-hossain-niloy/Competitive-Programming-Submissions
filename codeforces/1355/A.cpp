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

ll mul(ll n)
{   
    ll mi = 10,ma = 0;
    while (n>0)
    {
        ll s = n%10;
        n/=10;
        ma =  max(ma,s);
        mi =  min(mi,s);
    }
    return ma*mi;
}

int main(){
    
    TC(t)
    {
       ll n,k;
       cin >> n >> k;
       k--;
       while(k--)
       {
           if (mul(n)==0) break;

           n+=mul(n);
       }
       cout << n << endl;

    }

    return 0;
}
