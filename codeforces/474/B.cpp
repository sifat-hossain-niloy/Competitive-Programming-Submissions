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

    int a[n],b[n],sum = 0;
    FL(n) 
    {
        cin >> a[i];
        sum+=a[i];
        b[i] = sum;
    }

    int k;
    cin >> k;
    for (int i = 0;i<k;i++)
    {
        int x;
        cin >> x;

        int l = -1,r = n-1;

        while (l!=r-1)
        {
            int m = (l+r)/2;
            if (b[m]>=x) r=m;
            else l = m;
        }
        cout << r+1<< endl;
    }
    return 0;
}
