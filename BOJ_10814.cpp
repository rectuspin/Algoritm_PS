#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,t,i,j;
string str;
typedef struct {
	int num;
	string str;
}st;

vector<st> vec;

bool standard(st a, st b) {
	return a.num < b.num;	
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> t >> str;
		
		vec.push_back({t,str});
	}
	
	stable_sort(vec.begin(), vec.end(), standard);

	for (i = 0; i < n; i++) {
		cout << vec[i].num << " " << vec[i].str<<"\n";;
	}
	return 0;
}
