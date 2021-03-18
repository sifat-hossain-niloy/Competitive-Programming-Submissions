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
        string s;

        cin >> s;

        bool enc = false , ans = true;

        for (int i = 0;i<s.size()-1;i++)
        {
           if (s[i]== '1' && s[i+1]==s[i])
           {
               enc = true;
           }
           else if ( enc && s[i]=='0')
           {
               if (s[i+1]=='0')
               {
                   ans = false;
                   break;
               }
           }

        }
        if ( ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
