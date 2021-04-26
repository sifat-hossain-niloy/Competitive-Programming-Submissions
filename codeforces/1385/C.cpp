#include<bits/stdc++.h>
#include<cmath>
#include<cstring>

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

int main(){
    
    TC(t)
    {
        int n,ans=-1;
        cin >> n;
        int a[n];
        FL(n) cin >> a[i];

        bool inc = true;
        for (int i = n-1;i>0;i--)
        {
            if (!inc && a[i]-a[i-1]<0)
            {
                ans = i;
                break;
            }
            else if (a[i]-a[i-1]>0)
            {
                inc = false;
            }
        }
        if (ans == -1)
        {
            cout << 0 << endl;
        }
        else 
        {
            cout << ans << endl;
        }
    }

    return 0;
}
