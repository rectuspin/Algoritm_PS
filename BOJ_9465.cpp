#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int>> vec;

void dp(int n) {
	vec[n]=vec[n - 1] %10007+ 2*vec[n - 2]%10007;
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t,n,i,j;
	cin >> t;
	for ( i = 0; i < t; i++){
		cin >> n;
		vec.resize(2);
		vec[0].resize(n);
		vec[1].resize(n);
		for (j = 0; j < n; j++)	cin >> vec[0][j];
		for (j = 0; j < n; j++)	cin >> vec[2][j];

	}

	return 0;
} 


