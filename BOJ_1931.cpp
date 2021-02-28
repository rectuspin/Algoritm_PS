#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct time {
	int start;
	int end;
};
bool cmp(time first,time second) {
	if (first.end == second.end)
		return first.start < second.start;
	else
		return first.end < second.end;
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int available;
	int n, i, j,t1,t2,cnt,max;
	cin >> n;
	vector<time> vec;
	
	for (max=0,i = 0; i < n; i++) {
		cin >> t1 >> t2;		
		vec.push_back({ t1,t2 });
		if (t2 > max)
			max = t2;
	}
	vector<bool> isAvailable(max+1,true);

	sort(vec.begin(), vec.end(),cmp);

	cnt = 0; available = 0;
	for (i = 0; i < n; i++) {
		if (available <= vec[i].start) {
			available = vec[i].end;
			cnt++;
		}

	}
	cout << cnt;

	return 0;
} 
