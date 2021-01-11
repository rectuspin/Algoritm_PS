#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> vec;

int visit(int n,int a,int b) {
	int count=0;
	if (n==1) {
		if (a == 0)
			return a + b;
		else
			return a + b + 1;
	}
	else{
		if (a < pow(2,n - 1)&&b<pow(2,n-1)) {//top left
			count = visit(n - 1, a, b);
		}
		else if (a < pow(2, n - 1) && b >= pow(2, n - 1)) {//top right
			count = pow(2, n - 1)*pow(2, n - 1) + visit(n - 1, a, b - pow(2, n - 1));
		}
		else if(a>=pow(2,n-1) && b < pow(2, n - 1)){//bottom left
			count = pow(2, n - 1)*pow(2, n - 1) *2 + visit(n - 1, a - pow(2, n - 1), b);
		}
	
		else if (a >= pow(2,n - 1) && b >= pow(2, n - 1)) {//bottom right
			count = pow(2, n - 1)*pow(2, n - 1) *3 + visit(n - 1, a - pow(2, n - 1), b - pow(2, n - 1));
		}
	}
	return count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i,j,N,r,c;
	cin >> N>>r>>c;
	vec.resize(pow(2,N));
	for ( i = 0; i < N; i++){
		vec[i].resize(N);
	}
	cout<< visit(N,r,c);

	return 0;
}