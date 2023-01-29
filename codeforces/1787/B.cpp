#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;cin >> t;while(t--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
#define N               cout << "NO\n"
#define vi vector<int>
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
        a = a * a%MOD;
        b >>= 1;
    }
    return res;
}
struct DSU {
    vi e; void init(int n) { e = vi(n,-1); }
    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); } 
    bool sameSet(int a, int b) { return get(a) == get(b); }
    int size(int x) { return -e[get(x)]; }
    bool unite(int x, int y) { // union by size
        x = get(x), y = get(y); if (x == y) return 0;
        if (e[x] > e[y]) swap(x,y);
        e[x] += e[y]; e[y] = x; return 1;
    }
};


struct segtree {

    int size;
    vector<ll> seg;
    
    void init(int n)
    {
        size = 1; 
        while(size<n)size*=2;
        seg.assign(2*size,0LL);
    }   
    void set(int i ,int v,int x,int lx,int rx)
    {
        if(rx-lx == 1)
        {
            seg[x] = v;
            return;
        }
        int m = (lx+rx)/2;
        
        if(i<m)
        {
            set(i,v,2*x+1,lx,m);
        }
        else{
            set(i,v,2*x+2,m,rx);
        }
        
        seg[x] = seg[2*x+1]+seg[2*x+2];
    }
    
    void set(int i ,int v)
    {
        set(i,v,0,0,size);
        
    }
    void build(vector<ll> &a,int x,int lx,int rx)
    {
        if(rx-lx==1)
        {
            if(lx<(int)a.size())
            {
                seg[x] = a[lx];
            }
            return;
        }
        int m  =(lx+rx)/2;
        build(a,2*x+1,lx,m);
        build(a,2*x+2,m,rx);
        seg[x] = seg[2*x+1] +seg[2*x+2];
    }
    
    void build (vector<ll> &a)
    {
        build(a,0,0,size);
    }
    ll query(int l,int r,int x,int lx,int rx)
    {
        if(r<=lx || l>=rx)
        {
            return 0;
        }
        if(lx>=l && rx<=r)
        {
            return seg[x];
        }
        int m = (lx+rx)/2;
        
        ll s1 = query(l,r,2*x+1,lx,m)+query(l,r,2*x+2,m,rx);
        
        return s1; 
    }
    
    ll query(int l,int r)
    {
        return query(l,r,0,0,size);
    }
};




int main(){
    Fastio
    
    TC(t)
    
    {
        ll n;
        cin >> n;
        queue<pair<int,int>>s;
        // vector<int> v(100005,0);
        // map<int,int> v;
        ll prime = 1;

        for (int i = 2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime==1)
        {
            cout << n << endl;
            continue;
        }

        // for (int i = 2;i*i<=n;i++)
        // {
        //     int cnt = 0;
        //     while(n%i==0)
        //     {
        //         cnt++;
        //         n/=i;
        //     }
        //     if(cnt>0)s.push({i,cnt});
        // }
        int cnt = 0,i = 2;
        for ( ;i*i<=n;i++)
        {
            cnt = 0;
            while(n%i==0)
            {
                // cout << i << " ";
                cnt++;
                n/=i;
            }
            if(cnt>0)
            {
                s.push({i,cnt});
                cnt = 0;
            }
        }
        if(cnt>0) s.push({i,cnt});
        else if(n>1) s.push({n,1});
        
        // while(!s.empty())
        // {
        //     auto x = s.front();
        //     cout << x.ff << " " << x.ss << endl;
        //     s.pop();
        // }
        // cout << s.size() << endl;
        ll ans = 0;
        while(s.size()>1)
        {
            queue<pair<int,int>> q;
            ll temp = 1;

            while(!s.empty())
            {
                auto x = s.front();
                // cout << x.first << " " << x.second << endl;
                s.pop();

                temp*=x.first;
                x.second--;
                if(x.second!=0) q.push(x);
            }
            ans+=temp;
            s = q;

            
        }
        if(s.size()>0)ans+=(s.front().first*s.front().second);
        cout << ans<< endl;
    
    }
    return 0;
}