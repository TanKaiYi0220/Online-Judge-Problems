#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int s, d;
		cin >> s >> d;
		// a + b = s, |a - b| = d
		// a > b, 2a = s + d and 2b = s - d
		float a = (s+d)/2.0;
		float b = (s-d)/2.0;
		if ( a < 0 || b < 0 || int(a) != a || int(b) != b ){
			cout << "impossible\n";
		}
		else
		{
			cout << a << " " << b << "\n";
		}
	}
}
