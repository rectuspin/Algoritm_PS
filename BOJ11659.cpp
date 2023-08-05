#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n, sum, max;
	double avg;
	vector<int> v;

	cin >> n;
	v.resize(n);
	max = -1;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		max = (max > v[i]) ? max : v[i];
	}
	
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += v[i];
	}
	avg = sum * 100.0 / max / n;
	cout << avg;
	return 0;
}