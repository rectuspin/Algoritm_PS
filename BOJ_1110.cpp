#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, x,y,z,cnt;

	cin >> n;
	cnt = 0;
	z = n;
	do {
		cnt++;
		x = z;
		y = (x / 10) + (x % 10);
		z = (x % 10) * 10 + (y % 10);
	} while (z != n);

	cout << cnt;

	return 0;

}