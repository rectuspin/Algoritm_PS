#include <iostream>

using namespace std;

bool used[9] = { false };
int nums[9] = { 0 };

void recur(int n,int m,int nth) {
	int i;
	if (m < 1) {
		for (i = 1; i < nth; i++){
			cout<<nums[i]<<' ';
		}
		cout << '\n';
		return;
	}
	for (i = 1; i <= n; i++) {
		if (!used[i]) {
			nums[nth] = i;
			used[i] = true;
			recur(n, m-1,nth+1);
			used[i] = false;
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
