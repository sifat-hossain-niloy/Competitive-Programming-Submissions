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
    
    int n;
    cin >> n;
    int a[n+1];
    FL(n) cin >> a[i];
    sort(a,a+n);
    a[n+1]= 0;

    int q;
    cin >> q;
    while (q--)
    {
        int x,mid;
        cin >>x;

        int l = -1,r=n;
        while (l!=r-1)
        {
            mid = (l+r)/2;

            if (a[mid]>x) r = mid;
            else if (a[mid]<=x) l = mid;
        }
        cout << l+1 << endl;

        /*for (int i = 0;i<n;i++)
        {
            if (a[i]>x)
            {
                cout << i << endl;
                break;
            }
            if (i==n-1)
            {
                cout << n << endl;
            }
        }*/
    }

    return 0;
}
