#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> vec;

void solve(long n) {
	for  (long i = 1; i < n-1; i++){
		vec[n] += vec[i];
	}
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long n, i, j;
	
	cin >> n;
	vec.resize(n+1);
	if (n == 1)
		cout << 1; 
	else if (n == 2)
		cout << 1;
	else {
		vec[1] = 2;
		vec[2] = 1;
		for (i = 3; i <= n; i++) {
			solve(i);
		}
		cout << vec[n];
	}
	return 0;
} 


