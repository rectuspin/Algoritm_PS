#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);


	//SK=false CY=true
	bool arr[1001] = { NULL };
	arr[1] = false;
	arr[2] = true;
	arr[3] = false;
	arr[4] = true;

	bool tmp;
	int n;
	cin >> n;

	for (int i = 5; i <= n; i++) {
		//SK 1 CY 1
		if (arr[i - 2] == false)
			tmp = false;
		//SK 1 CY 3 or SK 3 CY 1
		else if ((i - 4) >= 1 && arr[i - 4] == false)
			tmp = false;
		//SK 3 CY 3
		else if ((i - 6) >= 1 && arr[i - 6] == false)
			tmp = false;
		else
			tmp = true;
		arr[i] = tmp;
	}
	
	if (arr[n] == false)
		cout << "SK";
	else
		cout << "CY";
	return 0;
}