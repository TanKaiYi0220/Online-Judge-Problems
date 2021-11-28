#include <bits/stdc++.h>
using namespace std;
double pow(double p, double f){
	double total = 1;
	for ( int i = 0 ; i < f ; i++ ) total *= p;
	return total;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		double N, p, I, a, r, ans;
		cin >> N >> p >> I;
		if ( p == 0 ) ans = 0;
		else{
			a = pow(1-p, I-1)*p;
			r = pow(1-p, N);
			ans = a/(1-r);
		}
		cout << fixed << setprecision(4) << ans << "\n";
	}
}
