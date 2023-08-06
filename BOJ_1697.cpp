#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <iterator>
using namespace std;

int n, k;
deque<int> q;
vector<int> visited(100002,0);

int bfs(int a) {
	int i;
	visited[a] = 1;
	q.push_front(a);

	while (!q.empty()) {
		i = q.front(); q.pop_front();
		if (i == k)
			break;
		if (i >= 1 && visited[i - 1]==0 ) {
			q.push_back(i - 1);
			visited[i - 1] = visited[i] + 1;
		}
		if ((i + 1) <= 100000&&visited[i + 1]==0 ) {
			q.push_back(i + 1);
			visited[i + 1] = visited[i] + 1;

		}
		if ((2 * i) <= 100000&&visited[i * 2]==0) {
			q.push_back(i * 2);
			visited[i * 2] = visited[i] + 1;
		}
	}
	
	return (visited[k]-1);
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> k;

	cout<< bfs(n);

	return 0;
} 
