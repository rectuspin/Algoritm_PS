#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, sum;
	string str;
	cin >> n;
	cin >> str;
	vector<int> vec(n);

	sum = 0;
	for (int i = 0; i < n; i++) {
		vec[i] = (int)(str[i]-'0');
		sum += vec[i];
	}

	cout << sum;
	return 0;
}

