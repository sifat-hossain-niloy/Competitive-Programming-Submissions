#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;cin >> t;while(t--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
// #define N               cout << "NO\n"
#define vi vector<int>
#define ff first
#define ss second
#define pb push_back
#define pf push_front

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define read            freopen("out.txt","w",stdout)

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

// USACO
// Name : Wormhole
// link : http://www.usaco.org/index.php?page=viewproblem2&cpid=992

struct DSU {
    vi e; void init(int N) { e = vi(N,-1); }
    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); } 
    bool sameSet(int a, int b) { return get(a) == get(b); }
    int size(int x) { return -e[get(x)]; }
    bool unite(int x, int y) { // union by size
        x = get(x), y = get(y); if (x == y) return 0;
        if (e[x] > e[y]) swap(x,y);
        e[x] += e[y]; e[y] = x; return 1;
    }
};


int main(){
    Fastio
    
    std::ifstream read("wormsort.in");
    int n,m;
    read >> n >> m;
    // cin >> n >> m;
    map<int,int> mp;
    int p[n],hobe = 1;
    FL(n) 
    {
        read >> p[i];
        // cin >> p[i];
        if(p[i]-1!=i)hobe = 0;
    }
    DSU dsu;
    dsu.init(n+1);
    
    
    
    priority_queue<pair<int,pair<int,int>>> q;
    
    FL(m)
    {
        int x,y,z;
        read  >> x >> y >> z;
        // cin >> x >> y >>z;
        q.push({z,{x,y}});
    }
    
    int ans = MOD;
    
    for (int i = 1;i<=n;i++)
    {
        if(dsu.sameSet(i,p[i-1]))
        {
            continue;
        }
        
        while(!dsu.sameSet(i,p[i-1])){
            
            auto x = q.top();
            q.pop();
            dsu.unite(x.ss.ff,x.ss.ss);
            ans = min(ans,x.ff);
        
            
        }
        
        
    }
    std::ofstream("wormsort.out") << (

        hobe == 1 ? -1 : ans

    ) << endl;
    
    // cout << ans << endl;
    
    return 0;
}
