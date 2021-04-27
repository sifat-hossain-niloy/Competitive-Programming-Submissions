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
        vector <pair<int,int>> v;

        v.push_back(make_pair(0,0));
        
        for (int i = 0;i<n;i++)
        {
            int x,y;
            cin >> x >> y;
            v.push_back(make_pair(x,y));
        }
        bool hobe = true;
        for (int i = 1;i<v.size();i++)
        {
            if (v[i].first<v[i-1].first || v[i].second<v[i-1].second || (v[i].first-v[i-1].first)<(v[i].second-v[i-1].second) )
            {
                hobe = false;
                break;
            }
        }
        if(hobe)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
