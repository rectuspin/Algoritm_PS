#include <iostream>
#include <vector>

using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i, j,n;
	vector<unsigned long long> vec;
	vec.resize(4);
	vec[1] = 1;
	vec[2] = 2;
	vec[3] = 3;
	cin >> n;	
	for (i = 4; i <= n; i++)	{
		vec.push_back((vec[i - 2] + vec[i - 1])%10007);
	}
	cout << vec[n];
	return 0;
} 
