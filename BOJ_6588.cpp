#include <iostream>
#include <vector>

#define MAX 1000000
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int numPrime,n,i,j;
	vector<bool> isPrime(MAX+1,true);
	vector<int> primeNums(MAX);
	numPrime = 0;
	isPrime[1] = false;
	for ( i = 2; i*i <= MAX; i++){
		if (isPrime[i]) {
			primeNums[numPrime++]=i;
			for (j = i; i * j <= MAX; j++) {
				isPrime[i * j] = false; 
			}
		}
	}

	while (1) {
		cin >> n;
		if (n == 0)
			break;
		for ( i = 1; i <numPrime; i++){
			if (isPrime[n - primeNums[i]]) {
				cout << n << " = " << primeNums[i] << " + " << n-primeNums[i] << "\n";
				break;
			}
		}
	}

	return 0;
}