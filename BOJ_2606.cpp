#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

vector<vector<int>> v(101);	//adjaceny list
bool visited[101] = { false };

void search(int n) {
	visited[n] = true;
	for (vector<int>::iterator it = v[n].begin(); it != v[n].end(); it++) {
		if(!visited[*it])
			search(*it);
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i,num_pc,num_pair, t1,t2,cnt;
	
	cin >> num_pc >> num_pair;
	for (i = 0; i < num_pair; i++) {
		cin >> t1 >> t2;
		v[t1].push_back(t2);
		v[t2].push_back(t1);
	}
	search(1);
	
	for (cnt = 0,i = 2; i <101; i++) {
		if(visited[i])
			cnt++;
	}
	cout << cnt;


	return 0;
}
