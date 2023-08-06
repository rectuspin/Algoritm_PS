#include <iostream>
#include <string>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int numTest, numIter,i,j,k;
	string s, p;
	
	cin >> numTest;
	for (i = 0; i < numTest; i++) {
		p.assign("");
		cin >> numIter;
		cin >> s;
		for (j = 0; j < s.length(); j++) {
			for (k = 0; k < numIter; k++) {
				p.push_back(s[j]);
			}
		}
		if (i < numTest - 1)
			cout << p << "\n";
		else
			cout << p;
	}

	return 0;
}
