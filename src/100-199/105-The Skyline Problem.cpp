#include <bits/stdc++.h>
using namespace std;
int main()
{
	int board[10000+1] = {};
	int L, H, R;
	int maxR = 0;
	while(cin>>L>>H>>R)
	{
		maxR = max(maxR, R);
		for ( int i = L ; i < R ; i++ )
		{
			board[i] = max(board[i], H);
		}
	}
	int h = 0;
	for ( int i = 0 ; i < maxR ; i++ )
	{
		if ( board[i] != h )
		{
			cout << i << " " << board[i] << " ";
			h = board[i];
		}
	}
	cout << maxR << " 0\n";
}
