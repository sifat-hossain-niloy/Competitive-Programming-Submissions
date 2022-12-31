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
int par[101];

int find(int a)
{
    if(par[a]!=a)
    {
        par[a] = find(par[a]);
    }
    return par[a];
}
void unit(int a,int b)
{
    int roota=find(a);
    int rootb =find(b);
    
    if(rand()%2)
    {
        par[a] =rootb;
    }
    else{
        par[b]=roota;
    }
}

int vis[101];

void dfs(int s,vector<vector<int>>&g)
{
    vis[s] = true;
    
    for (auto x:g[s])
    {
        if(!vis[x])
        {
            dfs(x,g);
        }
    }
}



int main(){
    Fastio
    
    ll n;
    cin >> n;
    
    vector<pair<ll,ll>> v(n);
    
    FL(n)
    {
        ll x,y;
        cin >> x>> y;
        v[i] = make_pair(x,y);
    }
    
    // for (int i = 0;i<n;i++)
    // {
    //     par[i]= i;
    // }
    vector<vector<int>>g(101);
    
    
    
    for (int i = 0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(v[i].ff==v[j].ff || v[i].ss==v[j].ss)
            {
                // cout << i << " " << j << endl;
                g[i].push_back(j);
                g[j].pb(i);
                
            }
        }
    }
    int cnt = 0;
    
    for (int i = 0;i<n;i++)
    {
        if(!vis[i])
        {
            cnt++;
            dfs(i,g);
             
        }
        
    }
    cout << cnt-1 << endl;
    
    
    
    
    // int x[1005];
    // int y[1005];
    
    // memset(x,0,sizeof(x));
    // memset(y,0,sizeof(y));
    
    
    
    // FL(n)
    // {
    // 	int a,b;
    // 	cin >> a>> b;
    	
    // 	if(x[a]>0&& y[b]>0)
    // 	{
    // 		x[a]--;
    // 		y[b]--;
    // 	}
    // 	else if(x[a]>0)
    // 	{
    //         x[a]--;
    // 	}
    //     else if(y[b]>0)
    //     {
    //         y[b]--;
    //     }
    // 	else{
    // 		x[a]++;
    // 		y[b]++;
    // 	}
    	
    	
    // }
    
    // ll sumx=0,sumy= 0;
    // for (int i =0;i<=1001;i++)
    // {
    // 	// cout <<x[i] << " "<< y[i] << endl;
    // 	sumx+=x[i];
    // 	sumy+=y[i];
    // }
    // // cout <<sumx<< " "<< sumy << endl;
    // if(sumx>0)sumx--;
    // if(sumy>0)sumy--;
    // // if(n==1)sumx++;
    
    // cout <<min(sumx,sumy) << endl;
    
    
    return 0;
}