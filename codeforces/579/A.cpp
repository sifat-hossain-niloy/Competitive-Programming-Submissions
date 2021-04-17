#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

#define ll long long

#define TC(x)           int x;sc("%d",&x);while(x--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
#define N               cout << "NO\n"

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

int main(){
    
    int x;
    cin >> x;
    int a[32] = {0},ans= 0;

    for (int i = 30;i>=0;i--)
    {
        ll int y = pow(2,i);
        if ((x/y)>0)
        {
            a[i] = x/y;
            x-=(a[i]*y);
        }
    }
    for (int i = 0;i<31;i++)
    {
        ans+=a[i];
    }

    cout << ans << endl;
    return 0;
}
