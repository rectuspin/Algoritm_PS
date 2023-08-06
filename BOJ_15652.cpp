#include <iostream>

using namespace std;

int nums[9] = { 0 };

void recur(int n,int m,int nth) {
	int i;
	if (m < nth) {
		for (i = 1; i < nth; i++){
			cout<<nums[i]<<' ';
		}
		cout << '\n';
		return;
	}
	for (i = 1; i <= n; i++) {
		if (nums[nth - 1]<=i) {
			nums[nth] = i;
			recur(n, m, nth + 1);
		}
	}	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int i, j, N, M;

	cin >> N >> M;

	recur(N,M,1);
	return 0;
}
