#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		
		string s;
		cin >> s;
		
		int z = 0,o = 0;
		for (int i = 0;i<s.size();i++)
		{
			if(s[i]=='1') o++;
			else z++;
		}
		if(o==z)
		{
			o--;
		}
		
		cout << min(o,z)<< endl;
	}
	return 0;
}