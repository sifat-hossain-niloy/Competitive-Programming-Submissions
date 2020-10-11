#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

#define ll long long
#define sci(x)          scanf("%d",&x)
#define scii(x,y)       scanf("%d%d",&x,&y)
#define sciii(x,y,z)    scanf("%d%d%d",&x,&y,&z)
#define scl(x)          scanf("%ld",&x)
#define scll(x,y)       scanf("%ld%ld",&x,&y)
#define sclll(x,y,z)    scanf("%ld%ld%ld",&x,&y,&z)
#define scL(x)          scanf("%lld",&x)
#define scLL(x,y)       scanf("%lld%lld",&x,&y)
#define scLLL(x,y,z)    scanf("%lld%lld%lld",&x,&y,&z)
#define scs(s)          scanf("%s",s)

#define TC(t)           int t;sc("%d",&t);while(t--)
#define FTC(t)          int t;sc("%d",&t);for(int tt=1;tt<=t;tt++)

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

int main(){

    int n;
    cin >> n;

    int o = 0, t = 0, th=0, f= 0;

    for ( int i= 0 ; i<n; i++)
    {
        int x;
        cin >> x;

        if (x==1) o++;
        else if ( x==2) t++;
        else if ( x== 3) th++;
        else f++;

    }

    int y = min (o,th);
    o -= y;
    th-=y;

    if (t%2)
    {
        t=t/2+1;
        if (o>1) o-=2;
        else if (o>0) o--;
    }
    else t/=2;

    if (o%4==0) o/=4;
    else o = o/4+1;

    int ans = o+t+th+f+y;
    cout << ans;
    return 0;
}
