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
    
    int a,b;
    cin >> a >> b ;
    int ans = a,y=0;
    while (a)
    {
        a+=y;
        y=0;
        if (a%b!=0)
        {
            y+= a%b;
            ans+=(a/b);
            a/=b;
        }
        else{
            ans+=(a/b);
            a/=b;
        }
        
    }
    
    cout<<ans;

    return 0;
}
