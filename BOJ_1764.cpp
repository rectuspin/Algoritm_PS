#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
//
//bool standard(string a,string b) {
//	if (a.compare(b) <= 0)
//		return a > b;
//	else
//		return b < a;
//}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i, n, m;
	string str;
	vector<string> ans;
	map<string, bool> list;

	cin >> n >>m;
	
	for (i = 0; i < n; i++) {
		cin >> str;
		list[str] = true;
	}
	for (i = 0; i < m; i++) {
		cin >> str;
		if (list[str])
			ans.push_back(str);
	}
	cout << ans.size() << "\n";
	sort(ans.begin(),ans.end());
	for (i = 0; i < ans.size(); i++)
		cout << ans[i]<< "\n";
	return 0;
}
