#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000000
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int i, j, sum,a,b;
	vector<int> height(9);

	for ( sum=0, i = 0; i < 9; i++){
		cin >> height[i];
		sum += height[i];
	}
	for ( i = 0; i < 9; i++){
		for(j = 0; j < 9; j++){
			if (i!=j&&sum - height[i] - height[j] == 100) {
				a = height[i]; b = height[j];
				break;
			}
		}
	}
	sort(height.begin(), height.end());
	for ( i = 0; i < 9; i++){
		if (height[i] != a && height[i]!= b)
			cout << height[i] << '\n';
	}

	return 0;
}