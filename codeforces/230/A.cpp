#include<iostream>
#include<cmath>
#include<cstring>
#include<stdio.h>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define sci(x)          scanf("%d",&x)
#define scii(x,y)       scanf("%d%d",&x,&y)
#define sciii(x,y,z)    scanf("%d%d%d",&x,&y,&z)
#define scl(x)          scanf("%ld",&x)
#define scll(x,y)       scanf("%ld%ld",&x,&y)
#define sclll(x,y,z)    scanf("%ld%ld%ld",&x,&y,&z)
#define scL(x)          scanf("%lld",&x)
#define scLL(x,y)       scanf("%lld%lld",&x,&y)
#define scLLL(x,y,z)    scanf("%lld%lld%lld",&x,&y,&z)
#define scs(s)          scanf("%s",s)

#define TC(x)           int x;sc("%d",&x);while(x--)
#define FTC(t)          int t;sc("%d",&t);for(int tt=1;tt<=t;tt++)

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

int main(){

    int s,n;
    cin >> s >> n;

    vector<pair<int,int> >v;

    for ( int i = 0; i<n; i++)
    {
        int x,y;

        cin >> x>>y;

        v.push_back( make_pair(x,y));

    }

        sort(v.begin(), v.end());

        for ( int i= 0 ; i<n; i++)
        {

            if ( v[i].first >= s)
            {
                cout << "NO" ;
                return 0;
            }
            s += v[i].second ;
        }
        cout << "YES";

    return 0;
}
