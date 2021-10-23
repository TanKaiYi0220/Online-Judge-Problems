#include <bits/stdc++.h>
using namespace std;
int main()
{
	string num;
	while(cin>>num && num != "0")
	{
		cout << num << " is ";
		int odd = 0, even = 0;
		for ( int i = 0 ; i < num.size() ; i += 2 ) even += num[i] - '0';
		for ( int i = 1 ; i < num.size() ; i += 2 ) odd += num[i] - '0';
		if ( abs(even-odd) % 11 ) cout << "not ";
		cout << "a multiple of 11.\n";
	}
}
