#include <iostream>

using namespace std;

int mem[12] = { 0 };

int solve(int a) {
	if (mem[a] != 0) return mem[a];
	else
		return solve(a - 1) + solve(a - 2) + solve(a - 3);
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i, n,t;
	mem[1] = 1;
	mem[2] = 2;
	mem[3] = 4;
	cin >> t;
	for (i = 0; i <t; i++) {
		cin >> n;		
		cout << solve(n) << "\n";
	}
	
	return 0;
}
