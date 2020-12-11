#include<iostream>
#include<cmath>
#include<cstring>
#include<stdio.h>

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

    int t;
    cin >> t;

    while (t--)
    {
        int n , k ;

        cin >>  n >> k ;

        char s[1000]="" , s1[2] = "a" ,s2[2] = "b", s3[2] ="c";

//        if (n%3==0)
//        {
//            for (int i = 0 ;i < n/3 ; i++){
//            strcat(s,"abc");
//            }
//        }
        for ( int j = 1 ; j<=n ; j++)
        {
            if (j%3==1)
            {
               strcat(s,s1);
            }
            else if (j%3==2)
            {
               strcat(s,s2);
            }
            else {
               strcat(s,s3);
            }
        }

        cout << s << endl;

    }

    return 0;
}
