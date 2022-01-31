#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		
		int n;
		cin >> n;
		
		int d = n%7,x = n%10;
		if(d==0)
		{
			cout << n << endl;
		}
		else if(x>=d)
		{
			cout << (n-d) << endl;
		}
		else{
			cout << (n+7-d) << endl;
		}
	}
	return 0;
}