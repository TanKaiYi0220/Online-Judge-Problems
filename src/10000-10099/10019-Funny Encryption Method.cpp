#include <bits/stdc++.h>
using namespace std;
int cal_b1(int num)
{
	int b1 = 0;
	while(num>0)
	{
		if ( num&1 ) b1++;
		num /= 2;
	}
	return b1;
}
int cal_b2(int num)
{
	int b2 = 0;
	while(num>0)
	{
		b2 += cal_b1(num%10);
		num /= 10;
	}
	return b2;
}
int main()
{
	int N;
	cin >> N;
	while(N--)
	{
		int num;
		cin >> num;
		cout << cal_b1(num) << " " << cal_b2(num) << "\n";
	}
}
