#include <bits/stdc++.h>
using namespace std;
int sum(long long n)
{
	while( n >= 10 )
	{
		long long temp = 0;
		while ( n > 0 )
		{
			temp += n % 10;
			n /= 10;
		}
		n = temp;
	}
	return n;
}
int main()
{
	long long num;
	while(cin>>num, num!=0)
	{
		cout << sum(num) << "\n";
	}
}
