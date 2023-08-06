#include <iostream>
#include <string>
#include <iterator>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b,x,y;
	cin >> a >> b;


	x = (a / 100 + ((a / 10) % 10)*10 + ((a % 10) * 100));
	y = (b / 100 + ((b / 10) % 10)*10 + ((b % 10) * 100));

	x > y ? cout << x : cout << y;
	return 0;
}