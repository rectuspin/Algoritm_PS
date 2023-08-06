#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct st {
	int original;
	int compressed;
	int order;
};
bool comp_size(st a,st b) {
	return a.original < b.original;
}
bool comp_order(st a,st b) {
	return a.order < b.order;
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,i;
	
	cin >> n;
	vector<int> data(n);
	vector<st> data_sorted(n);

	for ( i = 0; i < n; i++){
		cin >> data[i];
	}
	for (i = 0; i < n; i++) {
		data_sorted[i].original = data[i];
		data_sorted[i].order = i;
	}
	sort(data_sorted.begin(), data_sorted.end(),comp_size);

	data_sorted[0].compressed = 0;
	for ( i = 1; i < n; i++){
		if (data_sorted[i - 1].original == data_sorted[i].original)
			data_sorted[i].compressed = data_sorted[i - 1].compressed;
		else
			data_sorted[i].compressed = data_sorted[i - 1].compressed+1;
	}
	sort(data_sorted.begin(), data_sorted.end(),comp_order);

	for (i = 0; i < n; i++) {
		cout << data_sorted[i].compressed<<" ";
	}
	return 0;
} 
