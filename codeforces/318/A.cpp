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

#define TC(x)           int x;sc("%d",&x);while(x--)
#define FTC(t)          int t;sc("%d",&t);for(int tt=1;tt<=t;tt++)

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

int main(){

    Fastio;

    ll n,k;
    cin >> n >> k;

    if (n%2)
    {

        if (k>n/2+1)
        {
            k =  k- n/2-1;
            cout << 2*k;
        }
        else {
            cout << 1+(k-1)*2;
        }
    }
    else {
        if (k>n/2)
        {
            k =  k- n/2;
            cout << 2*k;
        }
        else {
            cout << 1+(k-1)*2;
        }
    }
    return 0;
}
