#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int prev;
		int d_arr[n] = {};
		bool jolly = true;
		cin >> prev;
		for ( int i = 1 ; i < n ; i++ )
		{
			int now;
			cin >> now;
			int d = (now>prev)?now-prev:prev-now;
			if ( ( d >= n ) || ( d == 0 ) || ( d_arr[d] ))
			{
				d = 0;
				jolly = false;
			}
			d_arr[d] = 1;
			prev = now;
		}
		if ( jolly ) cout << "Jolly";
		else cout << "Not jolly";
		cout << "\n";
	}
}
