#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//selection sort
int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, i, j, max_index,tmp;
	cin >> n;
	vector<int> vec;

	tmp = n;
	for (i = 0; (tmp % 10 != 0)||(tmp/10>0);i++) {
		vec.push_back(tmp % 10);
		tmp = tmp / 10;
	}
	
	n = vec.size();
	for (i = 0; i < n; i++) {
		max_index = i;
		for (j = i; j < n; j++) {
			if (vec[max_index] < vec[j])
				max_index = j;
		}
		swap(vec[i], vec[max_index]);
	}
	for (i = 0; i < vec.size(); i++) {
		cout << vec[i];
	}
	return 0;
}