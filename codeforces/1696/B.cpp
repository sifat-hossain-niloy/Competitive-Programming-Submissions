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
    Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        ll a[n+2];
        map<ll,int> mp;
        a[0] = 0;
        a[n+1] = 0;
        for (int i = 1;i<=n;i++) 
        {
            cin >> a[i];
            if(a[i]!=0) a[i] = 1;
            mp[a[i]]++;
        }

        int cnt = 0,now = 0;

        for (int i = 0;i<=n+1;i++)
        {
            if(a[i]==now) continue;
            if(a[i]!=now)
            {
                cnt++;
                now= a[i];
            } 
        }
        cnt/=2;
        if(cnt>=2)
        {
            cout<< 2 << endl;
        }
        else if(cnt==1)
        {
            cout << 1 << endl;
        }
        if(cnt==0 )
        {
            if(mp[0]==n) cout << 0 << endl;
            else cout << 1 << endl;
        }
        
    }
    
    return 0;
}