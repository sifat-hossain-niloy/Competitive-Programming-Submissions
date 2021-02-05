#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

#define ll long long

#define TC(x)           int x;sc("%d",&x);while(x--)
#define FL(t)           for(int i=0;i<t;i++)

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int x,y;
        cin >> x >> y;
        string s;
        cin >> s;
        int u=0,d=0,r=0,l=0;
        for (int i =0; i<s.size();i++)
        {
            if(s[i]=='R')r++;
            else if(s[i]=='U')u++;
            else if(s[i]=='D')d++;
            else l++;
        }
        bool ans = true ;
        int ehh  = 0;
        if (x>0) {
            if (r>=x ) ehh++;
            else ans = false;

        }
        else {
            if (l>=abs(x)) ehh++;
            else ans = false ;
        }
        if (y>0)
        {
            if (u>=y) ehh++;
            else ans = false ;
        }
        else {
            if (d>=abs(y)) ehh++;
            else ans = false ;
        }
        if (ans && ehh ==2 ) cout << "YES"<<endl;
        else cout << "NO" << endl;
    }

    return 0;
}
