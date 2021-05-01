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
    string s;
    cin >> n >> s;
    int cnt1= 1,cnt2=1;

    for (int i = 1;i<n;i++)
    {
        if (s[i]==s[i-1])
        {
            cnt1++;
        }
        else{
            break;
        }
    }
    for (int i =n-2;i>0;i--)
    {
        if (s[i]==s[i+1])
        {
            cnt2++;
        }
        else{
            break;
        }
    }

    unsigned ll ans;



    if (cnt1==n)
    {
        ans= (n*(n+1)/2)%998244353;
    }
    else  if (s[0]==s[n-1])
    {
        ans = cnt1+1;
        ans *= (cnt2+1);
        ans%=998244353;
    }
    
    else{
        ans = (cnt1+cnt2+1)%998244353;
    }
    cout << ans;

    return 0;
}
