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
    
    int n,m;
    cin >> n >> m;
    
    ll a[m];
    FL(m)
    {
    	cin >> a[i];
    }
    
    priority_queue<int> q;
    FL(m)
    {
    	q.push(a[i]);
    }
    ll max=0, cnt= 0;
    
    while(!q.empty() && cnt<n)
    {
    	auto s = q.top();
    	q.pop();
    	if(s==0)continue;
    	max+=s;
    	s--;cnt++;
    	q.push(s);
    }
    while(!q.empty())q.pop();
    FL(m)
    {
    	q.push(-1*a[i]);
    }
    cnt= 0;
    ll min=0;
    while(!q.empty() && cnt<n)
    {
    	auto s = q.top();
    	s*=-1;
    	q.pop();
    	if(s==0) continue;
    	
    	min+=s;
    	s--;
    	s*=-1;
    	cnt++;
    	q.push(s);
    }
    
    
    cout << max<< " "<< min << endl;
    
    
    return 0;
}