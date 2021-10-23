#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	cin >> l;
	cin.ignore();
	map<string, int> ans;
	while(l--)
	{
		string line;
		getline(cin, line);
		istringstream context(line);
		string country;
		context >> country;
		ans[country]++;
	}
	for ( auto a : ans ) cout << a.first << " " << a.second << "\n";
}
