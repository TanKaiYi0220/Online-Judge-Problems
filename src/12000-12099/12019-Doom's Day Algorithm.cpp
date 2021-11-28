#include <bits/stdc++.h>
using namespace std;
int main(){
	int doom[12] = {10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};
	string weekday[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int t;
	cin >> t;
	while(t--){
		int M, D;
		cin >> M >> D;
		int d = D - doom[M-1];
		if ( d < 0 ) d += ((-d)/7+1)*7;
		cout << weekday[d%7] << "\n";
	}
}
