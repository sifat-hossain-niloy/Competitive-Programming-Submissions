#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include <sstream>
#include <cstdlib>

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
        int a,b,c;
        cin >> a >> b >> c;

        string x,y,w,z;

        for (int i = 0;i<a;i++)
        {
            if (i==0) x+='1';
            else x+='0';
        }

        for (int i = 0;i<b;i++)
        {
            if (i==0) y+='1';
            else y+='0';
        }

        for (int i = 0;i<a;i++)
        {
            w+='9';
        }

        for (int i = 0;i<b;i++)
        {
            z+='9';
        }

        //cout << x << " " << y << " ";

        int m = stoi(x);
        int n = stoi(y);
        int o = stoi(w);
        int p = stoi(z);
        
        

        string d,e;
        for (int i = 0;i<c;i++)
        {
            if (i==0) d+='1';
            else d+='0';
        }
        for (int i = 0;i<c;i++)
        {
            e+='9';
            
        }
        //cout << d << " " << e << " ";

        int q = stoi(d);
        int r = stoi(e);

        x.clear();
        y.clear();
        w.clear();
        z.clear();
        d.clear();
        e.clear();

        //cout << m << " " << n << " " << o << " " << p << " "<< q << " " << r << endl;
        
        bool paisi  = false;
        for (int i = m;i<=o;i++)
        {
            for (int j = n;j<=p;j++)
            {
                if ( __gcd(i,j) >=q && __gcd(j,i) <=r )
                {
                    cout << i<< " " << j << endl;
                    paisi = true;
                    break;
                }
            }
            if (paisi) break;
        }
        

    }

    return 0;
}
