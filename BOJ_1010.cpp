#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> permu;

long long comb(int n,int m) {
	int i;
	long long sol = 1;
	long long nFacto = 1;
	for ( i = 2; i <= m; i++){
		sol *=i;
		if (i <= n)
			sol /= i;
		if (i <= m - n)
			sol /= i;
	}
	return sol;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,m,t,i;	

	cin >> t;
	for (i = 0; i < t; i++){		
		cin >> n >> m;
		
		cout<< comb(n,m)<<"\n";
	}

	return 0;
}