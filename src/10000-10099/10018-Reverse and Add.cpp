#include <bits/stdc++.h>
using namespace std;
long long num;
long long r_num;
string num_to_string(long long num)
{
	string s = "";
	r_num = 0;
	while(num>0)
	{
		r_num *= 10;
		r_num += num % 10;
		s = char(num%10+'a'-'1') + s;
		num /= 10;
	}
	return s;
}

bool isPalindrome(string seq)
{
	for ( int i = 0, j = seq.size() - 1 ; i < j ; i++,j-- )
	{
		if ( seq[i] != seq[j] ) return false;
	}
	return true;
}

int main()
{
	int N;
	cin >> N;
	while(N--)
	{
		int count = 0;
		cin >> num;
		while(!isPalindrome(num_to_string(num)))
		{
			count++;
			num = num + r_num;
		}
		cout << count << " " << num << "\n";
	}
}
