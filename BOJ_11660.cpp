#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, i, j, x1, x2, y1, y2,ans;
	cin >> n >> m;
	
	vector<vector<int>> origin(n+1,vector<int>(n+1,0));
	vector<vector<int>> sum(n + 1, vector<int>(n + 1, 0));

	for (i = 1;i <= n;i++) {
		for (j = 1;j <= n;j++) {
			cin >> origin[i][j];
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + origin[i][j];
		}
	}

	for (i = 1;i <= m;i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		ans = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
		cout << ans;
	}

	return 0;
}