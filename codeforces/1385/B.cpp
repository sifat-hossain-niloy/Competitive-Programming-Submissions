#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include <algorithm>
#include<vector>
#include <bits/stdc++.h>

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

#define TC(t)           int t;sc("%d",&t);while(t--)
#define FTC(t)          int t;sc("%d",&t);for(int tt=1;tt<=t;tt++)

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

int main(){
    int t;
    cin >> t;

    while (t--){

        int n;
        cin >> n;
        int p[2*n+1];
        vector <int > v;

        for (int i= 1;i<=2*n ; i++){
            cin >> p[i];


            if(find(v.begin(), v.end(),p[i]) != v.end()) {
                continue;
            }
            else {
                v.push_back(p[i]);
            }

        }

        for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";


        cout << endl;

}

    return 0;
}

