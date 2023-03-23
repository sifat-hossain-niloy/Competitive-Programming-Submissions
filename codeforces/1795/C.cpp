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
        int n;
        cin >> n;

        ll a[n],b[n];
        vector<ll>pre(n+1);

        ll ans[n+1] = {0};
        ll left[n],right[n];

        FL(n) cin >> a[i];
        FL(n) cin >> b[i];

        pre[0] = 0;

        FL(n) pre[i+1] = pre[i]+b[i];


        for (int i = 0 ;i<n;i++)
        {
            left[i] = i;

            int l = upper_bound(pre.begin(),pre.end(),a[i]+pre[i])-pre.begin()-1;

            right[i] = l;

            if(a[i]<b[i]) 
            {
                ans[i]+=a[i];
                // right[i]--;
                continue;
            }

            ans[l]+=(a[i]-pre[l]+pre[i]);
        }

        // FL(n) cout << left[i] << " " << right[i] << endl;

        sort(left,left+n);
        sort(right,right+n);

        // FL(n) cout << ans[i] << " ";
        //  cout << endl;

        for (int i = 0;i<n;i++)
        {
            int l,r;
            int count = 0;
            
            l = 0,r = n;

            while(l<=r)
            {
                int m = (l+r)/2;
                
                if(right[m]>(i))
                {
                    count = n-m;
                    r = m-1;
                }
                else l = m+1;
                
            }

            l = 0,r = n-1;

            while(l<=r)
            {
                int m = (l+r)/2;
                
                if(left[m]>i)
                {
                    r = m-1;
                }
                else l = m+1;
                
            }
            r++;
            count-=(n-r);
            ans[i]+=(b[i]*count);


            //  cout << i << " " << count << endl;


        }
        FL(n) cout << ans[i] << " ";
        cout << endl;
    }
    

    
   
    return 0;
}