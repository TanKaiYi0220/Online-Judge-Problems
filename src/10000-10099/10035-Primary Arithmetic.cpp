#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	while(cin>>a>>b)
	{
		if ( a == 0 && b == 0 ) break;
		int c = 0, count = 0;
		while(a>0||b>0)
		{
			int a1 = a % 10;
			int b1 = b % 10;
			if ( a1 + b1 + c > 9 )
			{
				c = 1;
				count++;
			}
			else
			{
				c = 0;
			}
			a /= 10;
			b /= 10;
		}
		if ( count == 0 ) cout << "No";
		else cout << count;
		cout << " carry operation";
		if ( count > 1 ) cout << "s";
		cout << ".\n";
	}
}
