#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
	long long num;
	long long mod[8] = {
		100000000000000,
		1000000000000,
		10000000000,
		1000000000,
		10000000,
		100000,
		1000,
		100
	};
	string bangla[4] = {"kuti", "lakh", "hajar", "shata"};
	int t = 1;
	while(cin>>num)
	{
		string prev = "";
		bool kuti = false;
		cout << setw(4) << t++ << ".";
		for ( int i = 0 ; i < 8 ; i++ )
		{
			if ( num / mod[i] != 0 )
			{
				if ( i < 4 ) kuti = true;
				cout << " " << num / mod[i] << " " << bangla[i%4];
				prev = bangla[i%4];
			}
			else if ( kuti && i%4 == 0 ) cout << " " << bangla[i%4];
			num %= mod[i];
		}
		if ( num || prev == "" ) cout << " " << num;
		cout << "\n";
	}
}
