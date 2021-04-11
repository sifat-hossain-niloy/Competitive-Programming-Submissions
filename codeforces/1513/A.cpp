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

        int p[n]={0},l[n]={0};

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

        int x = 0 ,y = 0;
        for (int i = n ;i>n-k;i--)
        {
            p[x] = i;
            x++;
        }
        for (int i = n-k;i>0;i--)
        {
            l[y] = i;
            y++;
        }
        
        for (int i = 0;i<n;i++)
        {
            if (i%2 && x)
            {
                cout << p[x-1]<< " ";
                x--;
            }
            else {

                cout << l[y-1] << " ";
                y--;
            }
        }
        cout << endl;
    }

    return 0;
}
