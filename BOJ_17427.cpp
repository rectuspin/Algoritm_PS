#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long sum,i,n;
	cin >> n;
	for (sum=0, i = 1; i <=n; i++){
		sum += i * (n / i);
	}
	cout << sum;
	return 0;
}