#include <iostream>
#include <vector>

using namespace std;

long long dp[30][30];

long long comb(int n,int m) {
	int i,j;
	for ( i = 1; i <= m; i++){
		dp[i][1] = i;
		dp[i][i] = 1;
	}
	for ( i = 2; i <= m; i++){
		for ( j = 2; j <= n; j++){
			//binomial theorem, Pascal's triangle
			dp[i][j] = dp[i - 1][j-1] + dp[i-1][j];
		}
	}	
	return dp[m][n];
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