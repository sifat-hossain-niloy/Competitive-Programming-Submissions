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

    char s[100];
    cin >> s;

    int o = 0, z = 0;

    bool x = false ;

    for ( int i = 0 ; i< strlen(s); i++)

    {
        if ( s[i]== '0')
        {
            z++;
            o = 0;
        }
        else {
            z = 0;
            o++;
        }
        if ( o == 7 || z == 7)
            x = true;
    }
    if (x)
    {
        cout << "YES" ;
    }
    else {
        cout << "NO";
    }


    return 0;
}

