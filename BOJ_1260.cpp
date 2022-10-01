/* https://www.acmicpc.net/problem/1260 */

#include <iostream>
#include <vector>
#include <queue>
#include <iterator>
#include <algorithm>

using namespace std;
vector<bool> visited;

//Recursive or Stack    
void DFS(vector<vector<int>> vec, int start) {

    visited[start] = true;
    cout << start<<" ";

    for (int i = 0; i < vec[start].size(); i++) {
        int tmp = vec[start][i];
        if (!visited[tmp]) {
            DFS(vec, tmp);
        }
    }

    return;
}

//Queue
void BFS(vector<vector<int>> vec, int numV,int start) {
    queue<int> q;
    vector<bool> visited(numV+1,false);

    visited[start] = true;
    q.push(start);

    while(!q.empty()){
        int tmp=q.front();
        cout << tmp<<" ";
        q.pop();
        for  (int i = 0;  i < vec[tmp].size(); i++) {
            if (!visited[vec[tmp][i]]) {
                q.push(vec[tmp][i]);
                visited[vec[tmp][i]]=true;
            }
        }

    }

    return ;
}




int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //Declaration
    int n, m, v;
    vector<vector<int>> graph_vec(1001);

    //Input
    cin >> n >> m >> v;

    //Initialization
    //graph_vec.resize(10000);

    for (int i = 1; i <= m; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        graph_vec[t1].push_back(t2);
        graph_vec[t2].push_back(t1);
    }

    for (int i = 1; i <= n; i++){
        sort(graph_vec[i].begin(),graph_vec[i].end());
    }

    //DFS
    visited.resize(n + 1, false);
    DFS(graph_vec,v);

    cout << endl;
    //BFS    
    BFS(graph_vec, n, v);

    return 0;
}