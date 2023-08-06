#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;
int fibo(int n) {
	if (dp[n] != -1) {
		return dp[n];
	}
	return fibo(n-1)+fibo(n-2);
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	dp.assign(n+1, -1);
	dp[0] = 0;
	dp[1] = 1;
	cout<<fibo(n);


	return 0;
}