#include<iostream>
#include<cmath>
#include<algorithm>

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
        int b[n+2];
        ll int sum = 0;
        for (int i = 0;i<n+2;i++) 
        {
            cin >> b[i];
            sum+=b[i];
        }
        sort (b,b+n+2);

        sum-=(b[n+1]+b[n]);
        
        bool hobe = false;

        if (sum>b[n+1]) 
        {
            cout << -1 << endl;
            continue;
        }   
        else if (sum== b[n])
        {
            for (int i = 0;i<n;i++) 
            {
                cout << b[i];
                if (i!=n-1) cout << " ";
                else cout << endl;

            }    
            continue;
        }

        ll int su = sum+b[n],cnt = -1;

        for (int i = 0;i<n+1;i++)
        {
            su-=b[i];
            if (su==b[n+1])
            {
                cnt = i;
                break;
            }
            else su+=b[i];

        }
        if (cnt==-1) 
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i<n+1;i++)
        {
            if (i!=cnt) cout << b[i] << " ";
        
        }
        cout << endl;


    }

    return 0;
}
