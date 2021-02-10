#include <iostream>
#include <string>
#include <map>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, i, j, cnt;
	string str;
	map<char,int> alphabet;
	bool isGroupNum=true;

	cin >> n;
	for ( cnt=0,i = 0; i < n; i++){
		cin >> str;
		for ( j = 0; j < str.length(); j++)	{
			if (alphabet.find(str[j])==alphabet.end())
				alphabet[str[j]] = j;
			else {
				if (alphabet[str[j]] != j - 1) {
					isGroupNum = false;
					break;
				}
				else
					alphabet[str[j]] = j;
			}			
		}
		if (isGroupNum)
			cnt++;
		isGroupNum = true;
		alphabet.clear();
	}
	cout << cnt;
	return 0;
}