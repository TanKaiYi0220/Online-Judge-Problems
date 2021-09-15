#include <bits/stdc++.h>
using namespace std;
int cycle_length(int n)
{
	int c = 1;
	while(n>1)
	{
		if ( n&1 ) n = 3*n+1;
		else n /= 2;
		c++;
	}
	return c;
}
int main()
{
	int i, j;
	while(cin>>i>>j)
	{
		int x, y;
		if ( i > j ) x = j, y = i;
		else x = i, y = j;
		int ans = 0;
		for ( int n = x ; n <= y ; n++ )
		{
			ans = max(ans, cycle_length(n));
		}
		cout << i << " " << j << " " << ans << "\n";
	}
}
