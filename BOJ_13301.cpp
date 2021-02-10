#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<long long> fibo;
	int n,i;

	cin >> n;

	fibo.assign(n+1, -1);
	fibo[0] = 0;
	fibo[1] = 1;

	for (i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	cout << fibo[n] * 2 + (fibo[n] + fibo[n - 1]) * 2;
	return 0;
}