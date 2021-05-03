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
int rec(ll n)
{
    if (n==0) return 0;
    else if (n== 1) return 1;
    else if (n==2) return 2;
    else if (n==3) return 2;
    int ans = rec(n/2)+1;
    return ans;
}

int main(){
    
    ll n;
    cin >> n;

    int ans = rec(n);
    cout << ans ;


    return 0;
}
