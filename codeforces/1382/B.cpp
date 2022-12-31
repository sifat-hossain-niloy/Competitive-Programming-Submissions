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
    for (int tt = 1;tt<=t;tt++)
    {
        int n;
        cin >>n;
        int pos = -1,cnt = 0;

        for (int i = 0;i<n;i++)
        {
            ll x;
            cin >> x;
            if(pos==-1 && x==1) cnt++;
            if(x>1 && pos==-1) pos = i;
        }
        if(cnt==n)
        {
            if(n%2)cout << "First";
            else cout << "Second";
        }
        else {
            if(pos%2) cout << "Second";
            else cout << "First";
        }
        cout << endl;
    }
    
    return 0;
}