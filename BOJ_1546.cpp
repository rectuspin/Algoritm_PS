#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	double sum;
	cin >> n;

	vector<int> vec(n);
	m = 0;
	for (int i = 0; i < n; i++)	{
		cin >> vec[i];
		m = (m > vec[i]) ? m : vec[i];
	}

	sum = 0;
	for (int i = 0; i < n; i++) {
		sum+=((double) vec[i] / m )* 100;

	}
	cout << sum / n;
	return 0;
}