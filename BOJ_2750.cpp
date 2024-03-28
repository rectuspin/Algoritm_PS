#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	cin >> n;

	vector<int> vec(n);
	for (int i = 0; i < n; i++)	{
		cin >> vec[i];
	}
	
	sort(vec.begin(), vec.end());
	
	for (int i = 0; i < n; i++) {
		cout << vec[i]<<"\n";
	}
	return 0;
}

