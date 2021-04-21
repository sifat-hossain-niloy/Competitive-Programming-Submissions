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
        int n,k;
        cin >> n >> k;

        int a[n];
        FL(n)
        {
            cin >> a[i];
        }

        int ans = 0;
        for (int i = 0;i<(n-1);i++)
        {
            if (k>=a[i])
            {
                a[n-1]+=a[i];
                k-=a[i];
                a[i]= 0;
                
                
            }
            else{

                a[i]-=k;
                a[n-1]+=k;
                k = 0;
                break;
            }
        }


        FL(n)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}
