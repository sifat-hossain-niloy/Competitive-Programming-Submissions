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
    
    int n;
    cin >> n;

    int a[n],o[n],z[n],one = 0, zero = 0;

    FL(n) 
    {
        cin >> a[i];
        if (a[i]==1)
        {
            one++;
            o[i]=one;
            z[i] = zero;

        }
        else{
            zero++;
            o[i]=one;
            z[i]=zero;
        }
    }
    int ans = 0;

    for (int i = 0;i<n;i++)
    {
        for (int j = i;j<n;j++)
        {
            if (a[i]==0 && a[j]==0)
            {
                int ez = z[j]-z[i]+1;
                int eo = o[j] -o[i];
                ans = max(ans, (one-eo+ez ) );
            }
        }
    }
    if (ans ==0)
    {
        cout << n-1;
    }
    else 
        cout << ans;


    return 0;
}
