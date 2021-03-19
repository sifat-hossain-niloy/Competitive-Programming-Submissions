#include<bits/stdc++.h>
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
    cin >> s;

    int  up =0,lo=0;

    for (int i = 0;i<s.size();i++)
    {
        if (s[i]<96) up++;
        else lo++;
    }
    if (lo>=up)
    {
        FL(s.size())
            putchar(tolower(s[i]));
    }
    else
    {
        FL(s.size())
            putchar(toupper(s[i]));

    }

    return 0;
}

