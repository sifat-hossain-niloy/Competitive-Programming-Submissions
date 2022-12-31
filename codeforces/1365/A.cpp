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
        int n,m;
        cin >> n >> m;

        int a[n][m];
        int row[n] ={0},col[m]={0};

        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<m;j++)
            {
                cin >> a[i][j];
                if(a[i][j]==1)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        int cnt = 0;
        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<m;j++)
            {
                if(row[i]==0 && col[j]==0)
                {
                    cnt++;
                    row[i] = 1;
                    col[j]=1;
                }
                
            }
        }
        if(cnt%2==0)
        {
            cout <<"Vivek\n";

        }
        else cout << "Ashish\n";

    }
    
    return 0;
}