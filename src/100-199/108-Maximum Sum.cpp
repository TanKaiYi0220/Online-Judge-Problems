#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int board[N][N];
	int sum[N+1][N+1] = {};
	
	for ( int i = 0 ; i < N ; i++ )
	{
		for ( int j = 0 ; j < N ; j++ ) cin >> board[i][j];
	}
	
	for ( int i = 1 ; i <= N ; i++ )
	{
		for ( int j = 1 ; j <= N ; j++ ) sum[i][j] = sum[i-1][j] + sum[i][j-1] + board[i-1][j-1] - sum[i-1][j-1];
	}
	
	int ans = -128;
	
	for ( int i = 1 ; i <= N ; i++ )
	{
		for ( int j = 1 ; j <= N ; j++ )
		{
			for ( int a = 0 ; a < i ; a++ )
			{
				for ( int b = 0 ; b < j ; b++ )
				{
					ans = max(ans, sum[a][b] + sum[i][j] - sum[i][b] - sum[a][j]);
					// get the rectangle sum from (a+1, b+1) to (i, j)
				}
			}
		}
	}
	
	cout << ans << "\n";
}
