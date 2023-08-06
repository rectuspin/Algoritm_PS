#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int i, n, k, t;
	deque<int> dq,ans;
	cin >> n>>k;
	for (i = 1; i <= n; i++) {
		dq.push_back(i);
	}

	while (dq.size() != 1) {
		for (i = 1; i < k; i++) {
			dq.push_back(dq.front());
			dq.pop_front();
			if (dq.size() == 1)
				break;
		}
		if (dq.size() == 1)
			break;
		t = dq.front();
		ans.push_back(t);
		dq.pop_front();
	}
	t = dq.front();
	ans.push_back(t);
	
	cout << "<";
	for (i = 0; i < n-1; i++) {
		cout << ans[i] << ", ";
	}
	cout << ans[n-1] << ">";

	return 0;
}
