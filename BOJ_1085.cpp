#include <iostream>
#include <vector>
//#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int x, y, w, h,min;
	//double to_wh, to_zero;
	cin >> x >> y >> w >> h;
	//to_wh = sqrt(pow(w - x, 2) + pow(h - y, 2));
	//to_zero=sqrt(pow(x, 2) + pow(y, 2));
	if (x > y) {
		if (w - x > h - y) {
			if (y < h - y)
				min = y;
			else
				min = h - y;
		}
		else {
			if (y < w - x)
				min = y;
			else
				min = w - x;
		}
	}
	else {
		if (w - x > h - y) {
			if (x < h - y)
				min = x;
			else
				min = h - y;
		}
		else {
			if (x < w - x)
				min = x;
			else
				min = w - x;
		}
	}

	cout << min;

	return 0;
}