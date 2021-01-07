#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, i;
	string tmp,tmp2;
	cin >> n>>m;

	map<string, string> hash;
	for ( i = 0; i < n; i++){
		cin >> tmp >> tmp2;
		hash[tmp] = tmp2;
	}
	for (i = 0; i < m; i++) {
		cin >> tmp;
		cout << hash[tmp] << "\n";
	}


	return 0;
}
