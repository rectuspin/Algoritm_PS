#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, start, end, cnt;
	cin >> n >> m;
	vector<int> vec(n);
	
	for (int i = 0; i < n; i++)	{
		cin >> vec[i];
	}

	start = 0; end = n - 1; cnt = 0;
	sort(vec.begin(), vec.end());

	while (start < end) {
		if (vec[start] + vec[end] < m) {
			start++;
		}
		else if (vec[start] + vec[end] > m) {
			end--;
		}
		else {
			cnt++;	start++; end--;
		}
	}
	cout << cnt;
	return 0;
}