
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
int com(char x)
{
	if(x=='L')return 2;
	else if(x=='M') return 1;
	return 0;
}


int main(){
    Fastio
    
    TC(t)
    {
        string a,b;
        cin >> a >> b;
        ll x = a.size(),y = b.size();

        if(com(a[x-1])>com(b[y-1]))
        {
        	cout << '>';
        }
        else if(com(a[x-1])<com(b[y-1]))
        {
        	cout << '<';
        }
        else{
        	if(x>y)
        	{
        		if(com(a[x-1])==0)cout << '<';
        		else cout << '>';
        	} 
        	else if( x==y) cout << '=';
        	else 
        		{
        			if(com(a[x-1])==0)cout << '>';
        			else cout << '<';
        		}
        }
        cout << endl;
    }
    
    return 0;
}