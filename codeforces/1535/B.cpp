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

        int o [n],e[n];
        int odd = 0,ev = 0;

        FL(n)
        {
            int x;
            cin >> x;
            if(x&1)
            {
                o[odd] = x;
                odd++;

            } 
            else{
                e[ev] = x;
                ev++;
            }
        }
        sort(o,o+odd,greater<int>());
        int cnt = 0;
        int temp = n-1;

        for (int i = 0;i<ev;i++)
        {
            cnt+=(temp);
            temp--;
        }
        for (int i = 0;i<odd;i++)
        {
            for (int j = i+1;j<odd;j++)
            {
                if(__gcd(o[i],2*o[j])>1)
                {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
