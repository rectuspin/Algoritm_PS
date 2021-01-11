#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int cnt,n,m,k;
vector<vector<int>> vec;
vector<vector<bool>> visited;
stack<int*> st;

bool checktop(int i, int j) {
	if (i - 1 >= 0)
		return true;
	else
		return false;
}
bool checkbottom(int i, int j) {
	if (i + 1 < n)
		return true;
	else
		return false;
}
bool checkleft(int i, int j) {
	if (j - 1 >= 0)
		return true;
	else
		return false;
}
bool checkright(int i, int j) {
	if (j + 1 < m)
		return true;
	else
		return false;
}
void check(int i, int j) {
	visited[i][j] = true;
	st.push(&vec[i][j]);

	while (!st.empty()) {
		if (checktop(i, j)) {
			if (1==vec[i - 1][j] && !visited[i - 1][j])
				check(i - 1, j);
		}
		if (checkleft(i, j)) {
			if (1==vec[i][j - 1] && !visited[i][j - 1])
				check(i, j - 1);
		}
		if (checkright(i, j)) {
			if (1 == vec[i][j + 1] && !visited[i][j + 1])
				check(i, j + 1);
		}
		if (checkbottom(i, j)) {
			if (1 == vec[i + 1][j] && !visited[i + 1][j])
				check(i + 1, j);
		}
		st.pop();
		return;
	}
}
void solve() {
	int i, j;
	for (cnt=0,i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {			
			if ((!visited[i][j])&&vec[i][j]==1) {
				check(i, j);
				cnt++;
			}
		}
	}
	cout << cnt<<"\n";
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int i, j,t,x,y;

	cin >> t;
	for (j = 0; j < t; j++)	{

		cin >> m >> n >> k;
		vec.resize(n+1);
		visited.resize(n+1);
		for (i = 0; i < n; i++) {
			vec[i].resize(m+1,0);
			visited[i].resize(m+1, false);
		}

		for (i = 0; i < k; i++) {
			cin >> x >> y;
			vec[y][x] = 1;
		}		

		solve();
		vec.clear();
		visited.clear();
	}
	return 0;
} 
