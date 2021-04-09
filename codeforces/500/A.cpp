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

    int n,x,sum = 1;
    cin >> n >> x;

    int a[n];
    
    for (int i = 1;i<n;i++) cin >> a[i];

    if (x==1) 
    {
        Y;
        return 0;
    }

    for (int i = 1;i<n;i++)
    {
        sum+=a[sum];
        if (sum==x) 
        {
            Y;
            break;
        }
        else if (sum>x)
        {
            N; 
            break;
        }

    }
    

    return 0;
}
