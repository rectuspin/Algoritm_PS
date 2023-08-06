#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,i,prev_remainder,tmp;
	
	while (cin >> n) {
		prev_remainder = 1%n;
		for (i = 1; i <= n; i++) {
			if (prev_remainder == 0) {
				cout << i<<"\n";
				break;
			}
			prev_remainder = (prev_remainder * 10 + 1) % n;
		}
	}
	return 0;
}