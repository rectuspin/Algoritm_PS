#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, tmp;
	cin >> n >> m;
	
	vector<long> sum(n,0);
	vector<long> remainder_cnt(m,0);
	long cnt;

	cin >> sum[0];
	for (int i = 1; i < n; i++)	{
		cin >> tmp;
		sum[i] = sum[i - 1] + tmp;
	}

	cnt = 0;

	for (int i = 0; i < n; i++) {
		int remainder = sum[i]%m;
		if (remainder == 0) 
			cnt++;
		cnt += remainder_cnt[remainder];
		remainder_cnt[remainder]++;
	}
	cout << cnt;
	return 0;
}