#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<vector>
#include<set>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;cin >> t;while(t--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
#define N               cout << "NO\n"

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
    
    TC(t)
    {
        int a[101];

        int b[4];

        FL(4)
        {
            cin >> b[i];
            a[b[i]] = i+1;
        }
        sort(b,b+4);

        
        if ( a[b[2]]==1 && a[b[3]]==2 || a[b[2]]== 2 && a[b[3]]==1 || a[b[2]]==4 && a[b[3]]==3 || a[b[2]]==3 && a[b[3]]==4  )
        {
            N;
        }
        else{
            Y;
        }

       

    }

    return 0;
}
