#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i, j,n,tmp,sum;
	vector<int> time;
	
	cin >> n;
	time.resize(n);
	for (i = 0; i <n; i++) {
		cin >> tmp;
		time[i]=tmp;
	}
	sort(time.begin(), time.end());
	
	for (sum=0,i = 0; i < n; i++)	{
		for (j = 0; j <= i; j++) {
			sum += time[j];
		}
	}
	cout << sum;
	return 0;
}
