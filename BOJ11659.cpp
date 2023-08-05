#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, i, j, k;
	vector<int> v,sum;

	cin >> n >> m;
	v.resize(n+1);
	sum.resize(n+1);

	for (k = 1; k <= n; k++) {
		cin >> v[k];
		sum[k] = sum[k - 1] + v[k];
	}
	
	for (k = 0; k < m; k++) {
		cin >> i >> j;
		cout << sum[j] - sum[i - 1]<<"\n";		
	}
	
	return 0;
}