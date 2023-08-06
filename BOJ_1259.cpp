#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int first, sec, tmp, i, j;
	string str1,str2;
	while (1) {
		cin >> tmp;
		if (tmp == 0)
			break;
		str1.assign(to_string(tmp));
		str2.assign(to_string(tmp));
		reverse(str1.begin(), str1.end());
		if (str1.compare(str2) == 0)
			cout << "yes"<<"\n";
		else
			cout << "no"<<"\n";
	}


	return 0;
}
