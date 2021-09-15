#include <bits/stdc++.h>
using namespace std;
bool des(array<int, 2> a, array<int, 2> b)
{
	if ( a[0] == b[0] ) return a[1] < b[1];
	return a[0] > b[0];
}

int main()
{
	int N;
	cin >> N;
	array<int, 2> count[26] = {};
	for ( int i = 0 ; i < 26 ; i++ ) count[i][1] = i;
	cin.ignore();
	while(N--)
	{
		string seq;
		getline(cin, seq);
		for ( char c : seq )
		{
			if ( c >= 'a' && c <= 'z' ) count[int(c-'a')][0] += 1;
			else if ( c >= 'A' && c <= 'Z' ) count[int(c-'A')][0] += 1;
		}
	}
	sort(count, count+26, des);
	for ( int i = 0 ; i < 26 ; i++ )
	{
		if ( count[i][0] == 0 ) break;
		cout << char(count[i][1]+'A') << " " << count[i][0] << "\n";
	}
}
