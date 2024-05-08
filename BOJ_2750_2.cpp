#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, i, j, tmp;
	cin >> n;
	vector<int> vec(n);

	for ( i = 0; i < n; i++){
		cin>>vec[i];
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n-i-1; j++) {
			if (vec[j] > vec[j + 1]) {
				tmp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = tmp;
			}
		}
	}
	for ( i = 0; i < n; i++){
		cout << vec[i] << "\n";
	}
	return 0;
}