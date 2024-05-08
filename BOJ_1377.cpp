#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, i, max;
	cin >> N;
	vector<pair<int,int>> A(N);

	for ( i = 0; i < N; i++){
		cin>>A[i].first;
		A[i].second = i;
	}
	sort(A.begin(), A.end());
	max = 0;
	for (i = 0; i < N; i++) {
		if (max < A[i].second - i)
			max = A[i].second - i;
	}
	cout << max+1;
	return 0;
}