#include<iostream>
#include<cmath>
#include<algorithm>

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

    int a[n];
    int sum = 0;
    for ( int i=0 ; i<n; i++)
    {
        cin >> a[i];
        sum+= a[i];
    }

    sort (a,a+n);
    int mi = 0, j =0;

    for ( int i = n-1; i>=0 ; i--)
    {
        sum-= a[i];
        mi+= a[i];
        j++;


        if ( sum < mi){
            cout << j;
            break;
        }

    }

    return 0;
}
