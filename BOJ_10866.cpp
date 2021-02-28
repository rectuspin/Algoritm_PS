#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<int> vec;

void dq_push(string cmd, int n) {
	if (cmd.compare("push_front") == 0) {
		vec.insert(vec.begin(), n);
	}
	else if (cmd.compare("push_back") == 0) {
		vec.push_back(n);
	}
	return;
}

int dq_rest(string cmd){
	int tmp;
	if (cmd.compare("pop_front") == 0) {	
		if (!vec.empty()) {
			tmp = vec.front();
			vec.erase(vec.begin());
			return tmp;
		}
		else
			return -1;
	}
	else if (cmd.compare("pop_back") == 0) {
		if (!vec.empty()) {
			tmp = vec.back();
			vec.pop_back();
			return tmp;
		}
		else
			return -1;
	}
	else if (cmd.compare("size") == 0) {	
		return vec.size();
	}
	else if (cmd.compare("empty") == 0) {	
		if (vec.empty())
			return 1;
		else
			return 0;
	}
	else if (cmd.compare("front") == 0) {	
		if (!vec.empty()) {
			return vec.front();
		}
		else
			return -1;
	}
	else if (cmd.compare("back") == 0) {	
		if (!vec.empty()) {
			return vec.back();
		}
		else
			return -1;
	}
	return -999;
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,i,t;
	string cmd;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd=="push_back") {
			cin >> t;
			dq_push(cmd, t);
		}
		else if(cmd=="push_front") {
			cin >> t;
			dq_push(cmd, t);
		}
		else {
			cout << dq_rest(cmd)<<"\n";
		}
	}


	return 0;
}
