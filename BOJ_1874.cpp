#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool desc(int a, int b) { return a > b; }
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, i, num, numToOutput, tmp;
	bool possible=true;
	cin >> n;
	vector<int> vec(n);
	vector<char> res;
	stack<int> st;

	for (i = 0; i < n; i++){
		cin >> vec[i];
	}

	for (i = 0, num=1; i < n; i++) {
		numToOutput = vec[i];
		
		if (numToOutput >= num) {
			while (numToOutput >= num) {
				st.push(num++); 
				res.push_back('+');
			}
			st.pop();
			res.push_back('-');
		}
		else {
			tmp = st.top();
			st.pop();
			if (tmp!=numToOutput) {
				cout << "NO";
				possible = false;
				break;
			}
			else {
				res.push_back('-');
			}
		}
		
	}

	if (possible) {
		for (i = 0; i < res.size(); i++) {
			cout << res[i]<<'\n';
		}
	}
	return 0;
}