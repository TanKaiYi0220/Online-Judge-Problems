#include <bits/stdc++.h>
using namespace std;
long long sum(long long a, long long n){
	n = n - a + 1;
	return n*(2*a+(n-1))/2;
}

int main(){
	long long S, D;
	while(cin>>S>>D){
		int n = sqrt(D*2);
		while(sum(S, n)<D){
			n++;
		}
		cout << n << "\n";
	}
}
