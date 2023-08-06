#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int i, j,m,n,k;
	cin >> n >> m >> k;

	int i, j, n;
	cin >> n;
	vector<vector<int>> vec(n, vector<int>(m));

	for ( i = 0; i < n; i++){
		for ( j = 0; j < m; j++){
			cin >> vec[i][j];
		}
	}
	return 0;
}