#include <iostream>
#include <vector>

#define MAX 1001
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,i,j,cnt;
	vector<bool> isPrime(MAX,true);

	isPrime[1] = false;
	for ( i = 2; i < MAX; i++){
		for ( j = 2; i*j < MAX; j++){
			isPrime[i * j] = false;
		}
	}

	cin >> n;
	for ( cnt=0,i = 0; i < n; i++){
		cin >> j;
		if (isPrime[j])
			cnt++;
	}
	cout << cnt;
	return 0;
}