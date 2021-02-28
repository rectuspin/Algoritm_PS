#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,i,j;
	string str;

	cin >> n;
	for (i = 0; i < n; i++) {
		stack<char> st;

		cin >> str;

		for (j = 0; j < str.size(); j++) {
			if (!st.empty()) {
				if (st.top() == '(' && str[j] == ')')
					st.pop();
				else
					st.push(str[j]);
			}
			else
				st.push(str[j]);
		}
		if (st.empty())
			cout << "YES"<<"\n";
		else
			cout << "NO"<<"\n";

	}			

	return 0;
}
