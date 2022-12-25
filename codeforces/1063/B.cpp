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

int n,m,x,y;
bool check(int fi,int fj)
{
	if(fi>=0 && fi<n && fj>=0 && fj<m) return true;
	
	return false;
}


int posi[4] = {0,0,1,-1};
int posj[4] = {1,-1,0,0};
bool vis[2001][2001];
int r[2001][2001];
int l[2001][2001];

void bfs2(int i,int j,vector<vector<char>> &graph)
{
    
    deque<pair<int,int>>q;
    
    q.push_front({i,j});
    r[i][j] = 0;
    l[i][j] = 0;
    
    
    vis[i][j] = true;
    
    while(!q.empty())
    {
        auto a = q.front().ff,b = q.front().ss;
        
        q.pop_front();
            
        
        for (int ii = 0;ii<4;ii++)
        {
            int fx = a+posi[ii],fy = b+posj[ii];
            
            
            if(check(fx,fy) && graph[fx][fy]!='*')
            {    
                if(!vis[fx][fy])
                {
                	if(ii==0)
                	{
                		if(r[a][b]+1<=x)
                		{
                			q.push_back({fx,fy});
                			r[fx][fy] = r[a][b]+1;
                			l[fx][fy] = l[a][b];
                			vis[fx][fy] = true;
                		}
                	}
                	else if(ii==1)
                	{
                		if(l[a][b]+1<=y)
                		{
                			q.push_back({fx,fy});
                			
                			r[fx][fy] = r[a][b];
                			l[fx][fy] = l[a][b]+1;
                			vis[fx][fy] = true;
                		}
                		
                		
                	}
                	else {
                		q.push_front({fx,fy});
                		
                		r[fx][fy] = r[a][b];
                		l[fx][fy] = l[a][b];
                		vis[fx][fy] = true;
                	}

                }
            }
        }
    } 
    
    
    
    
    
}



int main(){
    Fastio
    
    cin >> n >> m;
    int r,c; cin >> r >> c;
    
    r--;c--;
    cin >> y >> x;
    vector<vector<char>> graph(n+1,vector<char>(m+1));
    
    for (int i = 0;i<n;i++)
    {
    	for (int j = 0;j<m;j++)
    	{
    		cin >> graph[i][j];
    	}
    }
    bfs2(r,c,graph);
    
    ll ans = 0;
    for (int i = 0;i<n;i++)
    {
    	for (int j = 0;j<m;j++)
    	{
    		if(vis[i][j])
    			{
    				// cout << i+1 << " " << j+1 << endl;
    				ans++;
    			}
    	}
    }
    cout << ans << endl;
    return 0;
}