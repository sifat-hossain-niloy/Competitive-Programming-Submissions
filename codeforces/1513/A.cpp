#include<iostream>
#include<cmath>
#include<vector>

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

        if (n%2 && k>n/2)
        {
            cout << -1 << endl;
            continue;
        }
        else if (n%2==0 && k>=n/2)
        {
            cout << -1 << endl;
            continue;
        }
        int s = n,m =1;
        for (int i = 0;i<n;i++)
        {
            if (i%2 && k)
            {
                cout << s << " ";
                s--;
                k--;
            }
            else 
            {
                cout << m << " ";
                m++;
            }
        }
        
        cout << endl;
    }

    return 0;
}
