#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int e, s, m, i, j, tmp;

	cin >> e >> s >> m;

	for ( i = 0; i <= 7980; i++){
		if (i % 15 == e-1 && i % 28 == s-1 && i % 19 == m-1) {
			cout << i+1;
			break;
		}
	}

	return 0;
}