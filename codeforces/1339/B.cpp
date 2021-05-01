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
       int n;
       cin >> n;
       vector<ll>v,x;
       FL(n)
       {
           int q;
           cin >> q;
           v.push_back(q);
       }
       sort(v.begin(),v.end());

       for (int i = n/2;i<n;i++)
       {
           int z = v.back();
           x.push_back(z);
           v.pop_back();
       }
       

        while (v.size()!=0 || x.size()!=0)
        {
            if (x.size()!=0)
            {
                int y = x.back();
                cout << y << " ";
                x.pop_back();
            }
            if (v.size()!=0)
            {
                int z = v.back();
                cout << z << " ";
                v.pop_back();
            }
            
        }
        cout << endl;
    }

    return 0;
}
