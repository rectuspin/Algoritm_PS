#include <iostream>

using namespace std;

int main()
{
	int x, y, i, j;
	
	cin >> x >> y;
	if (x > 0) {//quadrant 1 or 4
		if (y > 0) {//quadrant 1
			cout << 1;
		}
		else {//quadrant 4
			cout << 4;
		}
	}
	else {//quandrant 2 or 3
		if (y > 0) {//quadrant 2
			cout << 2;
		}
		else {//quadrant 3
			cout << 3;
		}
	}
	
	return 0;

}