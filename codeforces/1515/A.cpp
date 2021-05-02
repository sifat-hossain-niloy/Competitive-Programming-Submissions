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
       int n,x,ans = 0,cnt = 0;
       cin >> n >> x;
       vector<int> v,r1,r2;

       FL(n)
       {
           int k;
           cin >> k;
           v.push_back(k);
           ans+=k;
       }
       sort(v.rbegin(),v.rend());

       if (ans==x)
       {
           cout <<"NO\n";
       }
       

       else{
           ans = 0;
           FL(n)
           {
               int k = v.back();
                if (ans+k==x)
                {
                    r1.push_back(k);
                    v.pop_back();
                    ans+=k;
                }
                else{
                    r2.push_back(k);
                    v.pop_back();
                    ans+=k;
                }
           }
           cout << "YES\n";

           for(auto x : r2)
           {
               cout << x << " ";
           }
           for (auto x : r1)
           {
               cout << x << " ";
           }
           cout << endl;
       }

    }

    return 0;
}
