#include <bits/stdc++.h>
using namespace std;
int main()
{
	string encode[3] = {
		"ertyuiop[]\\",
		"dfghjkl;'",
		"cvbnm,./"
	};
	string decode[3] = {
		"qwertyuiop[",
		"asdfghjkl",
		"zxcvbnm,"
	};
	
	string line;
	while(getline(cin, line))
	{
		for ( char c : line )
		{
			if ( c == ' ' )
			{
				cout << c;
				continue;
			}
			for ( int i = 0 ; i < 3 ; i++ )
			{
				for ( int j = 0 ; j < encode[i].size() ; j++ )
				{
					if ( c >= 'A' && c <= 'Z' ) c = c - 'A' + 'a';
					if ( c == encode[i][j] )
					{
						cout << decode[i][j];
						break;
					}
				}
			}
		}
		cout << "\n";
		
	}
}
