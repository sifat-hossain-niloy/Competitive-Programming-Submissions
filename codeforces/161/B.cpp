#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;cin >> t;while(t--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
#define N               cout << "NO\n"
#define ff first
#define ss second
#define pb push_back
#define pf push_front

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a;
        b >>= 1;
    }
    return res;
}


int main(){

    ll n,k,ss = 0,sp = 0;
    cin >> n >> k;
    vector<vector<int>> ans(k);

    vector<pair<int,int>> s,p;

    FL(n)
    {
       int x,y;
       cin >> x >> y;

       if(y==1)
       {
           s.push_back(make_pair(x,i+1));
           ss++;
           
       }   
       else {
           p.push_back(make_pair(x,i+1));
           sp++;
       }  
    }
    sort(p.rbegin(),p.rend());
    sort(s.rbegin(),s.rend());

    
    //cout << ss ;

    double sum = 0, cs=0,cp = 0;

    for (int i = 0;i<k;i++)
    {
        if(cs<ss)
        {
            if(i==k-1)
            {
                int mi = 1e9+7;
                while(cs<ss)
                {
                    sum+=(s[cs].first);
                    ans[i].push_back(s[cs].second);
                    mi = min(mi,s[cs].first);
                    cs++;
                    //cout << "1 1 " << sum << endl;
                }
                while(cp<sp)
                {
                    sum+=(p[cp].first);
                    ans[i].push_back(p[cp].second);
                    mi = min(mi,p[cp].first);
                    cp++;
                    //cout << "1 2 " << sum << endl;

                }
                sum-=(0.5*mi);
                //cout << "1 3 " << sum << endl;
                

            }
            else{
                sum+=(0.5*(s[cs].first));
                ans[i].push_back(s[cs].second);
                cs++;
                //cout << "1 4 " << sum << endl;
            }

        }
        else{
            if(i==k-1)
            {
                while(cp<sp)
                {
                    sum+=p[cp].first;
                    ans[i].push_back(p[cp].second );
                    cp++;
                   // out << "1 4 " << sum << endl;
                }
            }
            else{
                sum+=p[cp].first;
                ans[i].push_back(p[cp].second );
                cp++;
                //cout << "1 5 " << sum << endl;
            }
        }
    }
    printf("%.1lf\n",sum);
    for (int i = 0;i<k;i++)
    {
        cout << ans[i].size() << " ";
        for (auto x : ans[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}