#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

#define ll long long

#define TC(x)           int x;sc("%d",&x);while(x--)
#define FL(t)           for(int i=0;i<t;i++)

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

int main(){

    int n,m;
    cin >> n >> m;

    int a[m];
    ll int ans = 0,cnt = -1;

    FL(m) cin >> a[i];

    FL(m)
    {
        if (cnt==-1)
        {
            cnt = a[i];
            ans+=a[i]-1;
        }
        else if (cnt<= a[i])
        {
            ans+= (a[i]-cnt);
            cnt = a[i];
        }
        else {
            ans+= (n-cnt)+a[i];
            cnt = a[i];
        }
        //cout << ans << " " ;
    }
    cout << ans ;

    return 0;
}
