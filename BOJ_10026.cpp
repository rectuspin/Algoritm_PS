#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
using namespace std;


int n, cnt;
string str;
vector<string> vec;
stack<char*> st;
vector<vector<bool>> visited;

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
	if (j + 1 < n)
		return true;
	else
		return false;
}


void check(int i, int j) {
	visited[i][j] = true;
	st.push(&vec[i][j]);

	while (!st.empty()) {
		if (checktop(i, j)) {
			if (vec[i][j] == vec[i - 1][j] && !visited[i - 1][j])
				check(i - 1, j);
		}
		if (checkleft(i, j)) {
			if (vec[i][j] == vec[i][j - 1] && !visited[i][j - 1])
				check(i, j - 1);
		}
		if (checkright(i, j)) {
			if (vec[i][j] == vec[i][j + 1] && !visited[i][j + 1])
				check(i, j + 1);
		}
		if (checkbottom(i, j)) {
			if (vec[i][j] == vec[i + 1][j] && !visited[i + 1][j])
				check(i + 1, j);
		}
		st.pop();
		if(!st.empty())
			return;
	}
}


void check_weak(int i, int j) {
	visited[i][j] = true;
	st.push(&vec[i][j]);

	while (!st.empty()) {
		if (checktop(i, j)) {
			if (((vec[i][j] == vec[i - 1][j])||(vec[i][j]=='R'&&vec[i-1][j]=='G')||(vec[i][j]=='G'&&vec[i-1][j]=='R'))&& !visited[i - 1][j])
				check_weak(i - 1, j);
		}
		if (checkleft(i, j)) {
			if (((vec[i][j] == vec[i][j - 1])||(vec[i][j]=='R'&&vec[i][j-1]=='G')||(vec[i][j]=='G'&&vec[i][j-1]=='R') )&& !visited[i][j - 1])
				check_weak(i, j - 1);
		}
		if (checkright(i, j)) {
			if (((vec[i][j] == vec[i][j + 1])||(vec[i][j]=='R'&&vec[i][j+1]=='G')||(vec[i][j]=='G'&&vec[i][j+1]=='R') )&& !visited[i][j + 1])
				check_weak(i, j + 1);
		}
		if (checkbottom(i, j)) {
			if (((vec[i][j] == vec[i + 1][j])||(vec[i][j]=='R'&&vec[i+1][j]=='G')||(vec[i][j]=='G'&&vec[i+1][j]=='R') )&& !visited[i + 1][j])
				check_weak(i + 1, j);
		}
		if (!st.empty()) {
			st.pop();
			return;
		}
	}
}


void color_weak() {
	int i, j;
	for (cnt=0,i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {			
			if (!visited[i][j]) {
				check_weak(i, j);
				cnt++;
			}
		}
	}
	cout << cnt;
}

void color() {
	int i, j;
	for (cnt=0,i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {			
			if (!visited[i][j]) {
				check(i, j);
				cnt++;
			}
		}
	}
	cout << cnt;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int i, j;
	cin >> n;
	vec.resize(n);
	for (i = 0; i < n; i++) {
		cin >> str;
		vec[i]=str;
	}
	visited.resize(n);
	for (i = 0; i < n; i++) {
		visited[i].resize(n,false);
	}

	color();
	for (i = 0; i < n; i++) {
		for(j=0;j<n;j++)
			visited[i][j]=false;
	}
	cout << " ";
	color_weak();

	return 0;
}
