#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <map>
using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int i, n, m,j;
	string str;
	vector<string> vec(1);
	map<string, int> mp;
	cin >> n >> m;
	for (i = 1; i <= n; i++) {
		cin >> str;
		vec.push_back(str);
		mp[str] = i;
	}


	for (i = 1; i <= m; i++) {
		cin >> str;
		if (isdigit(str[0]) == 0) {//string input
			cout << mp[str] << "\n";
		}
		else { //int input
			j = stoi(str);
			cout << vec[j]<<"\n";
		}
	}

	return 0;
}

