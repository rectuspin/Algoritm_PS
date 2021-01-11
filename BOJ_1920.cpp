#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int i, t, n,m;
	vector<int> vec, val;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> t;
		vec.push_back(t);
	}
	cin >> m;
	for (i = 0; i < m; i++) {
		cin >> t;
		val.push_back(t);
	}
	
	for (i = 0; i < m; i++) {
		if (find(vec.begin(), vec.end(), val[i]) != vec.end())
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
	return 0;
}
