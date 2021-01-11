#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i,j, n, m,tmp,count;
	vector<int> vec_n;
	vector<int>	vec(20000001);
	
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp >= 0)
			vec[tmp]++;
		else if (tmp < 0)
			vec[tmp + 20000000]++;
	}
	cin >> m;
	for (i = 0; i < m; i++) {
		cin >> tmp;
		if (tmp >= 0)
			cout << vec[tmp]<<" ";
		else if (tmp < 0)
			cout<<vec[tmp + 20000000]<<" ";
	}



	return 0;
}
