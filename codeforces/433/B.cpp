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

int main(){
    
        int n;
        cin >> n;
        ll a[n],b[n+1],c[n+1],cnt = 0;
        b[0] = 0,c[0] = 0;
        vector<ll> v;

        FL(n)
        {
            cin >> a[i];
            cnt+=a[i];
            b[i+1] =  cnt;
        }
        sort(a,a+n);
        cnt = 0;
        FL(n)
        {
            cnt+=a[i];
            c[i+1] = cnt;
        }
        int m;
        cin >> m;

        FL(m)
        {
            int x,y,z;
            cin >> x >> y >> z;

            if (x == 1)
            {
                cout << b[z]-b[y-1] << endl;
            }
            else{
                cout << c[z]-c[y-1] << endl;
            }
        }

    return 0;
}
