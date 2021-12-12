#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int idx = 0;
	cin >> t;
	while(idx < t){
		idx++;
		int n;
		int center;
		char c;
		bool ans = true;
		cin >> c >> c >> n;
		long long matrix[n][n]; 
		for ( int i = 0 ; i < n ; i++ ){
			for ( int j = 0 ; j < n ; j++ ){
				cin >> matrix[i][j];
				if ( matrix[i][j] < 0 ) ans = false;
			}
		}
		
		for ( int i = 0 ; i < n ; i++ ){
			for ( int j = 0 ; j < n ; j++ ){
				if ( n % 2 ){
					if ( matrix[i][j] != matrix[n/2*2-i][n/2*2-j] ){
						ans = false;
						break;
					}
				}
				else
				{
					if ( matrix[i][j] != matrix[n-i-1][n-j-1] ){
						ans = false;
						break;
					}
				}
			}
			if (!ans) break;
		}
		cout << "Test #" << idx << ": ";
		if ( ans ){
			cout << "Symmetric.";
		}
		else{
			cout << "Non-symmetric.";
		}
		cout << "\n";
	}
} 
