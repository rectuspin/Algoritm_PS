#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

/*
그래프의 각 노드에 이전 노드의 상태를 이용하여 몇번째 날에 익은 것인지를 표현한다.
ex) 이미 익어있는 토마토는 1이 저장되어 있고, 그 다음날 익은 토마토는 2를 저장한다.
*/

struct st {
	int r;
	int c;
};

int n, m, numCount;
vector<vector<int>> vec;
queue<st> checklist;

bool isInside(int y,int x) {
	return (x < m && y < n && x >= 0 && y >= 0);
}
void bfs() {
	int i, j; 
	while (!checklist.empty()) {
		i = checklist.front().r;
		j = checklist.front().c;
		checklist.pop();
		if (isInside(i - 1, j) && vec[i - 1][j] == 0) {
			checklist.push({ i - 1, j });
			vec[i -1][j] = vec[i][j]+1;
		}
		if (isInside(i, j - 1) && vec[i][j - 1] == 0) {
			checklist.push({ i, j - 1 });
			vec[i][j-1] = vec[i][j]+1;
		}
		if (isInside(i + 1, j) && vec[i + 1][j] == 0) {
			checklist.push({ i + 1, j });
			vec[i+1][j] = vec[i][j]+1;
		}
		if (isInside(i, j + 1) && vec[i][j + 1] == 0) {
			checklist.push({ i , j + 1 });
			vec[i][j + 1] = vec[i][j]+1;
		}

	}
}
int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	bool isPossible = true;
	int i,j,maxCount;
	cin >> m>>n;
	vec.resize(n);
	for (i = 0; i < n; i++) {
		vec[i].resize(m);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> vec[i][j];
			if (vec[i][j] == 1)
				checklist.push({i, j});
		}
	}
	bfs();
	maxCount = 1;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (vec[i][j] == 0) {
				isPossible = false;
				break;
			}
			if(maxCount <vec[i][j])
				maxCount=vec[i][j];
		}
	}
	if (!isPossible)
		cout << -1;
	else if (maxCount==1)
		cout << 0;
	else
		cout << maxCount-1;
	return 0;
} 

