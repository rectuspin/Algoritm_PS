#include <iostream>
#include <vector>
using namespace std;


vector<bool> isSelfNum(10001,true);
int thousandsplace(int n) {
	return n / 1000;
}
int hundredsplace(int n) {
	if (n >= 1000)
		return (n / 100) % 10;
	else
		return n / 100;
}
int tensplace(int n) {
	if (n >= 100)
		return (n / 10) % 10;
	else
		return n / 10;
}
int unitsplace(int n) {
	return n % 10;
}

void func(int n) {
	int i;
	for (i = n; i <= 10000;) {
			if (i >= 1000) {
				i = i + thousandsplace(i) + hundredsplace(i) + tensplace(i) + unitsplace(i);
			}
			else if (i >= 100) {
				i = i + hundredsplace(i) + tensplace(i) + unitsplace(i);
			}
			else if (i >= 10) {
				i = i + tensplace(i) + unitsplace(i);
			}
			else {
				i = i + unitsplace(i);
			}
			if(i<=10000)
				isSelfNum[i] = false;
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i, j;

	for (i = 1; i <= 10000; i++) {
		if (isSelfNum[i] == true)
			func(i);
	}
	for (i = 1; i <= 10000; i++) {
		if (isSelfNum[i] == true)
			cout << i << "\n";
	}
	return 0;
}