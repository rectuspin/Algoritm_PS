#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i,x=0,n;
	string str;
	vector<int> vec(21);
	
	cin >> n;
	
	for (i = 0; i < n; i++) {
		cin >> str;
		if(str!="all"&&str!="empty")
			cin>>x; 
		if (str == "add") {
			if(vec[x]==0)
				vec[x]++;
		}
		else if (str == "remove") {
			if(vec[x]!=0)
				vec[x]--;
		}
		else if (str == "check") {
			cout << vec[x]<<"\n";
		}
		else if (str == "toggle") {
			if (vec[x] == 0)
				vec[x]++;
			else
				vec[x]--;
		}
		else if (str == "all") {
			for (x = 1; x <= 20; x++) {
				vec[x] = 1;
			}
		}
		else if (str == "empty") {
			for (x = 1; x <= 20; x++) {
				vec[x] = 0;
			}
		}
		
	}


	return 0;
}
