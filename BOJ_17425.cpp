#include <iostream>
#include <vector>

#define MAX 1000000
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int i, j, n, t;
	long long tmp;
	vector <long long> sum_aliquot(MAX+1,1);//sum_aliquot[i]==i의 약수의 합
	vector <long long> gn(MAX + 1, 0);

	for ( i = 2; i <= MAX; i++){
		for (j = 1; i*j <=MAX; j++){
			sum_aliquot[i*j] += i;
		}
	}
	for ( i = 1;i <=MAX ; i++){
		gn[i] += gn[i-1]+sum_aliquot[i];
	}
	cin >> t;
	for (i = 1; i <= t; i++) {
		cin >> n;
		cout << gn[n]<<'\n';
	}
	return 0;
}