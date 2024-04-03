#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, i, j, k;

	cin >> n >> m;
	vector<int> vec(n+1), sum(n+1,0);

	cin >> vec[1];
	sum[1] += vec[1];

	for ( k = 2; k <= n; k++){
		cin >> vec[k];
		sum[k] += sum[k - 1] + vec[k];
	}

	for (k = 0; k < m; k++) {
		cin >> i >> j;
		cout << sum[j] - sum[i - 1] << '\n';
	}
	return 0;
}