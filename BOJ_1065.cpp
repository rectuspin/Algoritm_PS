#include <iostream>
using namespace std;

bool func(int n) {
	int unit, tens, hundreds;
	if (n >= 100) {
		unit = n % 10;
		tens = (n / 10) % 10;
		hundreds = n / 100;

		if (tens - unit == hundreds - tens)
			return true;
		else
			return false;
	}
	else
		return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int i,cnt,n;
	cin >> n;
	
	for (cnt = 0,i = 1; i <= n; i++){
		if (func(i))
			cnt++;
	}
	cout << cnt;
	return 0;
}