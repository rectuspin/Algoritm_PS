#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
int conectedComponent = 0;

void dfs(int vertex) {
	visited[vertex] = true;

	for (int i = 0; i < adj[vertex].size(); i++){
		if (!visited[adj[vertex][i]])
			dfs(adj[vertex][i]);
	}
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, i, x, y;
	cin >> n >> m;
	adj.resize(n+1);
	visited.resize(n+1,false);

	for ( i = 0; i < m; i++){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (i = 1; i <= n; i++) {
		if (!visited[i]) {
			dfs(i);
			conectedComponent++;
		}
	}
	cout << conectedComponent;
	return 0;
} 
