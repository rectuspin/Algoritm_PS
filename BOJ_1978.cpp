#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	bool isPrime;
	int i, j, t, n;
	vector<int> vec;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> t;
		vec.push_back(t);
	}
	
	isPrime = true; t = 0;
	for (i = 0; i < n; i++) {
		for (j = 2; j < vec[i]; j++) {
			if (vec[i] % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime == true&&vec[i]!=1)
			t++;
		isPrime = true;
	}
	cout << t;
	return 0;
}
