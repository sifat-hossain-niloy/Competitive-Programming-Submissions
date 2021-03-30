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

    string s;
    cin >>s;

    int l = -1,u = -1,cnt=0;

    FL(s.size())
    {
        if(s[i]>'Z') l = i;
        else {
            u = i;
            cnt++;
        }
    }

    if (l==0 && cnt==s.size()-1)
    {
        char c = s[0] - 32;
        cout << c;
        for (int i = 1;i<s.size();i++)
        {
            c = s[i]+32;
            cout << c;
        }
    }
    else if (cnt==s.size())
    {
        for (int i = 0;i<s.size();i++)
        {
            char c = s[i]+32;
            cout << c;
        }

    }
    else cout << s;


    return 0;
}

