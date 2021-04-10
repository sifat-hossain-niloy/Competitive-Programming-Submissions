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
        int n,a=-1,b,c,d;
        cin >> n;
        int w,x,y,z;
        char ch;

        FL(n)
        {
            for (int j = 0;j<n;j++)
            {
                cin >> ch;
                if (ch=='*') 
                {
                    if (a==-1) 
                    {
                        a = i;
                        b = j;
                    }
                    else {
                        c= i;
                        d=j;
                    }
                }
            }
        }
        if (a==c)
        {
            x=b;
            z=d;
            if (a==0)
            {
                w = 1;
                y = 1;
            }
            else if (a==n-1)
            {
                w = 0;
                y = 0;
            }
            else{
                w = 1+a;
                y = 1+a;
            }
        }
        else if (b==d)
        {
            w=a;
            y=c;
            if (b==0)
            {
                x = 1;
                z = 1;
            }
            else if (b==n-1)
            {
                x = 0;
                z = 0;
            }
            else{
                x = 1+b;
                z = 1+b;
            }
        }
        else {
            w=c;
            x=b; 
            y=a;
            z=d;
        }

        FL(n)
        {
            for (int j = 0;j<n;j++)
            {
                if (i==w && j==x || i==y && j==z || i==a && j==b || i==c && j==d) cout << '*';
                else cout << '.';
            }
            cout << endl;
        }

    }

    return 0;
}
