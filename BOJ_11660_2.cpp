#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, i, j, x1, x2, y1, y2;
	cin >> n >> m;

	vector<vector<int>> table(n + 1, vector<int>(n + 1, 0));
	vector<vector<int>> sumTable(n + 1, vector<int>(n + 1, 0));


	for (i = 1; i <= n; i++)	{
		for ( j = 1; j <= n; j++){
			cin >> table[i][j];
			sumTable[i][j] += sumTable[i - 1][j] + sumTable[i][j - 1] - sumTable[i - 1][j - 1] + table[i][j];
		}
	}

	for (i = 0; i < m; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout << sumTable[x2][y2] - sumTable[x1 - 1][y2] - sumTable[x2][y1 - 1] + sumTable[x1 - 1][y1 - 1] << '\n';
	}

	return 0;
}