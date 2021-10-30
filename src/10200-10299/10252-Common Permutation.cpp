#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	while(getline(cin, a))
	{
		getline(cin, b);
		int set[26] = {};
		int ans[26] = {};
		for ( char c : a )
		{
			set[c-'a'] += 1;
		}
		for ( char c : b )
		{
			if ( set[c-'a'] > 0 )
			{
				set[c-'a'] -= 1;
				ans[c-'a'] += 1;
			}
		}
		for ( int i = 0 ; i < 26 ; i++ )
		{
			for ( int j = 0 ; j < ans[i] ; j++ )
			{
				cout << char(i+'a');
			}
		}
		cout << "\n";
	}
}
