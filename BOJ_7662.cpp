#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, k, i, j, n;
	char c;
	
	multiset<int> q;

	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> k;
		for (j = 0; j < k; j++) {
			cin >> c >> n;
			if (c == 'I') {
				q.insert(n);
			}
			else if (c == 'D') {
				if (q.size() == 0)
					continue;
				else if (n == 1) {
					q.erase(--q.end());
				}
				else {
					q.erase(q.begin());
				}
			}
		}
		if (q.empty()) {
			cout << "EMPTY" << "\n";
		}
		else {
			cout << *(--q.end())<<" "<<*q.begin()<<"\n";
		}
		q.clear();
	}
	return 0;
}