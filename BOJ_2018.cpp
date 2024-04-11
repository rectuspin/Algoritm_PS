#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int start_index, end_index, n, sum, res;

	cin >> n;
	
	res = 1; 
	sum = 1;
	start_index = 1;
	end_index = 1;
	while(end_index!=n) {
		if (n == sum) {
			res++;
			end_index++;
			sum += end_index;
		}
		else if (n<sum) {
			sum -= start_index;
			start_index++;
		}
		else{
			end_index++;
			sum += end_index;
		}
	}
	cout << res;
	return 0;
}