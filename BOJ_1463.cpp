#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i, n, val;
	vector<int> vec(1000001);

	vec[1] = 0;
	vec[2] = 1;
	vec[3] = 1;
	val = 0;
	cin >> n;

	for (i = 4; i <= n; i++) {
		val=vec[i - 1]+1;
		if (i % 3 == 0) {
			val=min(val,vec[i/3]+1);
		}
		if (i % 2 == 0) {
			val=min(val,vec[i / 2]+1);
		}		
		vec[i] = val;
	}
	cout << vec[n];

	return 0;
}
