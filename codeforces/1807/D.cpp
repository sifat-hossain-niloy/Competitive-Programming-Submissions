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


struct segtree {

    int size;
    vector<ll> seg;
    
    void init(int n)
    {
        size = 1; 
        while(size<n)size*=2;
        seg.assign(2*size,0LL);
    }   
    void set(int i ,ll v,int x,int lx,int rx)
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
    
    void set(int i ,ll v)
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
        int n,q;
        cin >> n >> q;

        ll pre [n+1];
        ll a[n];
        pre[0] = 0;
        

        FL(n)
        {
            cin >> a[i];
            pre[i+1] = a[i]+pre[i];
        }

        for (int i = 0;i<q;i++)
        {
            ll l,r,k;
            cin >> l >> r >> k;
            ll ans = pre[n]-(pre[r]-pre[l-1])+(r-l+1)*k;
            if(ans%2) Y;
            else N;
        }
    }
    
   
    return 0;
}