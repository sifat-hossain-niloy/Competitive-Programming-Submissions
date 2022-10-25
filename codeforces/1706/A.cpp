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
        int n,m;
        cin >> n >> m ;
        map<int,int> mp;
        int a[n];
        FL(n)cin >> a[i];

        for(int i = 0;i<n;i++)
        {
            int x = a[i];
            int y = m+1-a[i];
            if(x>y) swap(x,y);
            if(mp[x]==0)
            {
                mp[x]++;
            }
            else{
                mp[y]++;
            }
        }
        for (int i = 1;i<=m;i++)
        {
            if(mp[i]==0)cout << 'B';
            else cout << 'A';
        }
        cout << endl;
        
        
    }
    
    return 0;
}