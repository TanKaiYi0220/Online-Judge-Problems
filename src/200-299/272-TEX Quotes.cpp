#include <bits/stdc++.h>
using namespace std;
int main(){
	string line;
	bool open = true;
	while(getline(cin, line)){
		for ( int i = 0 ; i < line.size() ; i++ ){
			if ( line[i] == '"'){
				if (open) cout << "``";
				else cout << "''";
				open = !open;
			}
			else cout << line[i];
		}
		cout << "\n";
	}
}
