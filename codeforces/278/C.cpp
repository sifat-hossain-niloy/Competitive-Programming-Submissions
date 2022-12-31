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
#define read            freopen("out.txt","w",stdout)

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

vector<vector<ll>> v(1001);
vector<vector<ll>> g(1001);

bool vis[1001];

void dfs(int s)
{
    vis[s] = true;

    for (auto x : g[s])
    {
        if(!vis[x])
        {
            dfs(x);
        }
    }
}


int main(){
    Fastio
    
    ll n,m,sum = 0;
    cin >> n >> m;

    for (int i = 0;i<n;i++)
    {
        int x;
        cin >> x;
        sum+=x;
        for (int j = 0;j<x;j++)
        {
            int y;cin  >> y;
            y--;
            v[y].pb(i);
        }
    }
    
    for (int i = 0;i<m;i++)
    {
        if(v[i].size()>0)
        {
            for (int j = 0;j<v[i].size();j++)
            {
                for (int k = j+1;k<v[i].size();k++)
                {
                    g[v[i][j]].pb(v[i][k]);
                    g[v[i][k]].pb(v[i][j]);
                }
            }
            
        }
    }
    ll cnt = 0;

    for(int i = 0;i<n;i++)
    {
        if(!vis[i])
        {
            cnt++;
            dfs(i);
            
        }
    }
    if(sum==0) cout << cnt << endl;
    else cout<< cnt-1 << endl;
    
    return 0;
}