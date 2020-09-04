#include <iostream>


using namespace std;

    

int main ()
{
	int t;
	cin>> t;
	
	while (t--)
	{
		
			long long a, b;
			cin >> a>> b;
			if (a <b) swap(a,b);
			
			int cnt = 0;
			
			if (( a-b)%10 == 0) cnt = (a-b)/10;
			else cnt = (a-b)/10 + 1;
			
			cout << cnt << endl;
		}

}
