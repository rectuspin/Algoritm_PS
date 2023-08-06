#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<long long> dp;
	int n,i;

	cin >> n;

	dp.assign(n+1, -1);
	dp[0] = 0;
	dp[1] = 1;

	for (i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n];
	return 0;
}