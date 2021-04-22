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
    
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        ll int a[n];
        bool neg = true;

        ll int mp,cp=-1,cn=-1,ans = 0;

        FL(n) 
        {
            cin >> a[i];
        }
        
        
        for (int i = 0;i<n;i++)
        {
            if (i==0)
            {
                if (a[i]>0)
                {
                    neg = false;
                    mp = a[i];
                }
                else{
                    neg = true;
                    mp = a[i];
                }
            }
            
            else if (a[i]>0 && neg)
            {
                neg = false;
                ans+=mp;
                mp = a[i];
            }
            else if(a[i]>0 && !neg)
            {
                mp = max(a[i],mp);

            }
            else if (a[i]<0 &&  !neg)
            {
                neg = true;
                ans+=mp;
                mp = a[i];
            }
            else if (a[i]<0 &&  neg)
            {
                mp = max(a[i],mp);
            }
            if (i==n-1)
            {
                ans+=mp;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
