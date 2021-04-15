#include<iostream>
#include<cmath>
#include<algorithm>
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
    
    int m,s;
    cin >> m >>s;

    if (s==0 && m>1 || s>m*9)
    {
        cout << -1 <<  " " <<-1;
    }
    else
    {
        int s1;
        string c,b;
        s1= s;
        
        for (int i = m-1;i>=0;i--)
        {
            if (i==0)
            {
                c+=s1+'0';
            }
            else if (s1<=10 )
            {
                c+=(s1-1+'0');
                s1=1;
            }
            else 
            {
                c+='9';
                s1-=9;
            }
        }
        
        s1=s;
        for (int i = m-1;i>=0;i--)
        {
            if (s1<9)
            {
                b+=(s1+'0');
                s1=0;
            }
            else 
            {
                b+='9';
                s1-=9;
            }
        }
        reverse(c.begin(),c.end());
    cout << c << " " << b;
    }
    

    return 0;
}
