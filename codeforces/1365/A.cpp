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
    
    TC(t)
    {
        int n,m;
        cin >> n >> m ;

        int r[n] = {0}, c[m] = {0};
        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<m;j++)
            {
                int x;
                cin >> x;
                if (x==1)
                {
                    c[j]+=x;
                    r[i]+=x;
                }
            }
        }
        int cnt1=0,cnt2=0;
        for (int i = 0;i<n;i++)
        {
            if (r[i]==0)
            {
                cnt1++;
            }
        }
        for (int i = 0;i<m;i++)
        {
            if (c[i]==0)
            {
                cnt2++;
            }
        }
        int ans = min(cnt2,cnt1);
        if(ans%2)
        {
            cout << "Ashish\n";
        }
        else{
            cout << "Vivek\n";
        }
    }

    return 0;
}
