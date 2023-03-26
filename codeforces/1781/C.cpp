#include<bits/stdc++.h>

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
#define read            freopen("out.txt","w",stdout)

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
    Fastio

    TC(t)
    {
        int n;
        string s;
        cin >> n >> s;


        vector<int> freq(26,0);

        priority_queue<pair<int,int>> p;

        vector<vector<int>> pos(26);

        for(int i = 0;i<n;i++)
        {
            freq[(int)s[i]-'a']++;
            pos[(int)s[i]-'a'].push_back(i);
        }
        for(int i = 0;i<26;i++)
        {
            p.push({freq[i],i});
        }
        sort(freq.rbegin(),freq.rend());

        int best = -1,ans = -1;

        for(int k = 1;k<=26;k++)
        {
            if(n%k==0)
            {
                int same = 0,oc = n/k;

                for (int i = 0;i<k;i++)
                {
                    same+=min(oc,freq[i]);
                }
                if(same>best)
                {
                    ans = k;
                    best = same;
                }
            }
        }
        cout << n-best << endl;

        string t(n,'?');
        priority_queue<pair<int,int>>q;

        for (int i = 0;i<ans;i++)
        {
            auto x = p.top();
            p.pop();

            for(int sz = 0;sz<min(n/ans,x.ff);sz++)
            {
                t[pos[x.ss][sz]] = (char)('a'+x.ss);
            }
            if(n/ans > x.ff)
            {
                q.push({n/ans - x.ff , x.ss});
            }
        }
        int i = 0;
        while(!q.empty())
        {
            auto x = q.top();
            q.pop();
            while(x.ff>0 && i<n)
            {
                if(t[i]=='?')
                {
                    t[i] = (char) ('a'+x.ss);
                    x.ff--;
                }
                i++;
            }
            
        }
        cout << t << endl;
        //cout << ans << endl;
    }
   
    return 0;
}