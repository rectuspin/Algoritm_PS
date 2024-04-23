#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, first, second, cnt;
	cin >> n;
	vector<int> vec(n);

	for (int i = 0; i < n; i++)	{
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	cnt = 0;
	
	for (int i = 0; i < n; i++)	{
		first = 0; second = n - 1;
		while (first<second) {			
			if (vec[first] + vec[second] > vec[i]) {
				second--;
			}
			else if(vec[first] + vec[second] < vec[i]){
				first++;
			}
			else {
				if (i != first && i != second) {
					cnt++; break;
				}
				else if (i == first)
					first++;
				else if (i == second)
					second--;

			}
		}		
	}
	
	cout << cnt;
	return 0;
}