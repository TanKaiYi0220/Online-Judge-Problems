#include <bits/stdc++.h>
using namespace std;
int main()
{
	string line;
	while(getline(cin, line))
	{
		istringstream nums(line);
		long long a, b;
		nums >> a >> b;
		cout << abs(a-b) << "\n";
	}
}
