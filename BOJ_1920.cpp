#include <iostream>
#include <algorithm>

using namespace std;

int findNum(int arr[], int size, int num) {
	int res = 0;
	int low = 0;
	int high = size-1;
	int mid;
	while (low<=high) {
		mid = (low + high) / 2;
		if (arr[mid] == num) {
			res = 1;
			break;
		}
		else if (arr[mid] > num) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return res;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int i, t, n,m;
	int arr[100000];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> t;
		arr[i]=t;
	}
	sort(arr, arr+n);

	cin >> m;
	for (i = 0; i < m; i++) {
		cin >> t;
		cout << findNum(arr, n, t)<<"\n";
	}

	return 0;
}
