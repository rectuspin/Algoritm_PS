#include <iostream>
#include <vector>

#define MAX 1000000
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int m,n,i,j;
	vector<bool> isPrime(MAX+1,true);

	cin >> m >> n;

	isPrime[1] = false;
	for ( i = 2; i*i <= MAX; i++){
		if (isPrime[i]) {
			for (j = i; i * j <= MAX; j++) {
				isPrime[i * j] = false;
			}
		}
	}


	for (i = m; i <= n; i++){
		if (isPrime[i])
			cout << i << '\n';
	}
	return 0;
}