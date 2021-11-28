#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<string> lines;
	int _max = 0;
	string line;
	while(getline(cin, line)){
		lines.push_back(line);
		int s = line.size();
		_max = max(_max, s);
	}
	
	for ( int i = 0 ; i < _max ; i++ ){
		for ( int j = lines.size()-1 ; j >= 0 ; j-- ){
			if ( i >= lines[j].size() ) cout << " ";
			else cout << lines[j][i];
		}
		cout << "\n";
	}
	
}
