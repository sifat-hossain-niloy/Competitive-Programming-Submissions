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


int main(){
    Fastio
    
    TC(t)
    {
        ll n,k,r,c;
        cin >> n >> k >> r >> c;

        ll ansr = INT64_MAX,ansc = INT64_MAX;
        r--;c--;
        ll ar = -1,ci = -1;
        queue<pair<ll,ll>> q;

        for (int i = 0;i<n;i++)
        {
            for (int j = i%k;j<n;j+=k)
            {
                q.push({i,j});
                if(ar==-1 && ci==-1)
                {
                    if(i==r)
                    {
                        ci = c-j;
                    }
                    else if(j==c)
                    {
                        ar = r-i;
                    }
                }
            }
        } 
        if(ar==-1){
            ar = 0;
        }
        else if(ci = -1) ci = 0;
        char cha[n][n];
        
        //cout << ar << " " << ci << endl;
        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<n;j++) cha[i][j] = '.';
        }
        while(!q.empty())
        {
            
            int f = (q.front().first+ar+n)%n;
            int s = (q.front().second+ci+n)%n;
            cha[f][s] = 'X';
            //cout << f << " " << s << endl;
            q.pop();
            //q.push({f,s});
        }
        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<n;j++) cout << cha[i][j] ;
            cout << endl;
        }
        
        //cout << endl;
    }
    
    return 0;
}