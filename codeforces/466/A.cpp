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

    int n,m,a,b;

    cin >> n >>m>>a>>b;

    int ans = 0;

    int k = n/m;

    if (m*a>=b) 
    {
        ans+=k*b;
        n-=(k*m);
       // cout << " 1 ";
    }

    else {
        ans+=n*a;
        n=0;
       //// cout << " 2 ";
    }

    
    if ((n*a)<b) ans+=n*a;
    else if (n!=0)
    {
        ans+=b;
        //cout << " 4 ";
    }

    cout << ans;

    return 0;
}
