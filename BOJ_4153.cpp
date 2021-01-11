#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,i,t1,t2,t3;
	vector<int> vec;

	while (1){
		cin >> t1>>t2>>t3;
		vec.push_back(t1);
		vec.push_back(t2);
		vec.push_back(t3);
		if (vec[0] == 0 && vec[1] == 0 && vec[2] == 0)
			break;
		sort(vec.begin(), vec.end());
		if (pow(vec[0], 2) + pow(vec[1], 2) == pow(vec[2], 2))
			cout << "right\n";
		else
			cout << "wrong\n";
		vec.clear();
	}
	return 0;
}

