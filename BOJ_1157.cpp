#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	struct {
		int cnt=0;
		char c;
	}max, secondMax;

	int i, cnt;
	string str;
	cin >> str;

	map<char, int> alphabetCnt;
	char c;
	for (c = 'a'; c <= 'z';c++) {
		alphabetCnt[c]=0;
	}

	for ( i = 0; i < str.length(); i++){
		if (str[i] >= 'a') {
			alphabetCnt[str[i]-('a'-'A')]++;
		}
		else
			alphabetCnt[str[i]]++;
	}
	for (map<char, int>::iterator it = alphabetCnt.begin(); it != alphabetCnt.end(); it++) {
		if (max.cnt < it->second) {
			max.c = it->first;
			max.cnt = it->second;
		}
		else if (secondMax.cnt < it->second) {
			secondMax.c = it->first;
			secondMax.cnt = it->second;
		}
	}
	if (max.cnt == secondMax.cnt)
		cout << '?';
	else
		cout << max.c;
	return 0;
}