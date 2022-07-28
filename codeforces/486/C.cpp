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
    
    int n,p;
    cin >> n >> p;
    string s; cin >> s;
    

    int a[n/2 +1],b[n] = {0};
    ll ans = 0;

    for (int i = 0;i<n/2;i++)
    {
        a[i] = min( abs(s[i]-s[n-1-i]), 26-abs(s[i]-s[n-1-i]) ); 
        //cout << a[i] << endl;
        ans+=a[i];  
    }
    //cout << ans << endl;
    //ans+=(n/2);

    int bam = -1,dan = (n)/2;

    for (int i = 0;i<n/2;i++)
    {
        if(a[i]!=0)break;
        else bam = i;
    }
    for (int i = (n)/2 -1;i>=0;i--)
    {
        if(a[i]!=0)break;
        else dan = i;
    }
    bam++;
    dan--;
    
    p--;
    if(p>(n-1)/2)
    {
        p = n-1-p;
    }
    if(p>bam && p<dan) ans+=min(abs(bam-p),abs(dan-p));
    //cout << ans << endl;
    ans+=(max(dan,p)-min(bam,p));

    
    
    // cout << bam << " " << dan << endl;
    



    cout << ans << endl;
    
    return 0;
}