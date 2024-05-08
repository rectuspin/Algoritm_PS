#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,i,tmp;
	queue<int> q;

	cin >> n;

	for (i = 1; i <= n; i++)	{
		q.push(i);
	}
	
	while (q.size()!=1) {
		q.pop();
		tmp = q.front();
		q.pop();
		q.push(tmp);
	}
	tmp = q.front();
	cout << tmp;
	return 0;
}