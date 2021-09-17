#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int board[n];
		for ( int i = 0 ; i < n ; i++ ) cin >> board[i];
		sort(board, board+n);
		int m = board[n/2];
		int total = 0;
		for ( int i = 0 ; i < n ; i++ ) total += (m>board[i])?m-board[i]:board[i]-m;
		cout << total << "\n";
	}
}
