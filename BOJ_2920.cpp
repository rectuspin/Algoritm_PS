#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> vec(8),dup(8);
	int i, j;

	for (i = 0; i < 8; i++) cin >> vec[i];
	dup = vec;
	sort(dup.begin(), dup.end());
	if (vec == dup) { 
		cout << "ascending"; 
		return 0;
	}
	reverse(dup.begin(), dup.end());
	if (vec == dup) { 
		cout << "descending"; 
		return 0;
	}
	else {
		cout << "mixed";
		return 0;
	}

}
