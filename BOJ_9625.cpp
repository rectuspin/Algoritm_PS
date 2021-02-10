#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> A,B;
	int n, i;
	
	cin >> n;

	A.assign(n+1, -1);
	B.assign(n+1, -1);
	A[0] = 1; B[0] = 0;

	for (i = 1; i <= n; i++) {
		A[i] = B[i - 1];
		B[i] = A[i - 1] + B[i - 1];
	}
	cout << A[n] << " " << B[n];

	return 0;
}