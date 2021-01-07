#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,a,b,i,j;
typedef struct {
	int x;
	int y;
}st;

vector<st> vec;

bool standard(st a, st b) {
		
	if (a.x == b.x)
		return a.y < b.y;
	else
		return a.x < b.x;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a >> b;		
		vec.push_back({a,b});
	}
	
	stable_sort(vec.begin(), vec.end(), standard);

	for (i = 0; i < n; i++) {
		cout << vec[i].x << " " << vec[i].y<<"\n";;
	}
	return 0;
}
