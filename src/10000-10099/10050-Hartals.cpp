#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int N;
		cin >> N;
		int total = 0;
		int day[N] = {};
		int P;
		cin >> P;
		while(P--)
		{
			int h;
			cin >> h;
			int c_h = h-1;
			while(c_h<=N)
			{
				bool waste = true;
				if ( ( (c_h%7) == 5 ) || ( (c_h%7) == 6 ) || ( day[c_h] ) )
				{
					waste = false;
				}
				day[c_h] = 1;
				if ( waste ) total += 1;
				c_h += h;
			}
		}
		cout << total << "\n";
	}
}
