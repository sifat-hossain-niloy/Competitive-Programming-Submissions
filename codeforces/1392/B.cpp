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

    int t;

    cin >> t;

    while (t--){

        ll n,k;
        cin >> n >> k;
        ll ma = INT_MIN , mi = INT_MIN ;
        ll a[n+1];


        for ( int i =  1 ; i <=n ; i++){
            cin >> a[i];
            ma = max( ma ,a[i]);
        }

        for (int j = 1; j<=n ; j++){
            a[j] = ma - a[j];
            mi = max(mi , a[j]);
        }
        ll b[n+1];
        for ( int k =1 ;k<=n ; k++){
            b[k] = mi - a[k];
         }
         if (k%2){
            for ( int i = 1; i<=n ;i++){
                cout << a[i] << " " ;
            }
         }
         else {
             for ( int i = 1; i<=n ;i++){
                cout << b[i] << " " ;
            }
         }
         cout << endl;

    }

    return 0;
}

