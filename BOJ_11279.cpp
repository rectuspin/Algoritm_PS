#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, i, x, tmp;
	cin >> n;
	vector<int> vec;
	for ( i = 0; i < n; i++){
		cin >> x;
		if (x == 0) {
			if (vec.empty())
				cout << 0<<"\n";
			else {
				pop_heap(vec.begin(), vec.end());
				cout << vec.back()<<"\n";
				vec.pop_back();
			}
		}
		else {
			if (vec.empty()) {
				vec.push_back(x);
				make_heap(vec.begin(), vec.end());
			}
			else {
				vec.push_back(x);
				push_heap(vec.begin(), vec.end());
			}

		}
	}

	return 0;
} 
