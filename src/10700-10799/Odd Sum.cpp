#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int idx = 0;
	while(idx<t){
		idx += 1;
		int a, b;
		int ans = 0;
		cin >> a >> b;
		if ( a % 2 == 0 ){
			a += 1;
		}
		for ( int i = a ; i <= b ; i += 2 ){
			ans += i;
		}
		cout << "Case " << idx << ": " << ans << "\n";
	}
}
