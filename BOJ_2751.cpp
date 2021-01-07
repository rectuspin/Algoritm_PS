#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,t,i;
	vector<int> vec;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> t;
		vec.push_back(t);
	}

	sort(vec.begin(), vec.end());

	for (i = 0; i < n; i++) {
		cout << vec[i]<<"\n";
	}
	return 0;
}
