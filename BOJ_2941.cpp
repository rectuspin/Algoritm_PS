#include <iostream>
#include <string>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int i,cnt;
	string str;	
	getline(cin, str);

	for ( cnt=0,i = 0; i < str.length(); i++){
		if (i + 1 < str.length()) {
			if (str[i+1] == '=') {
				cnt++; i++;
			}
			else if (str[i + 1] == '-') {
				cnt++; i++;
			}
			else if (str[i] == 'd') {
				if (i + 2 < str.length() && str[i + 1] == 'z' && str[i + 2] == '=') {
					cnt++; i += 2;
				}
				else
					cnt++;
			}
			else if (str[i + 1] == 'j') {
				if (str[i] == 'l' || str[i] == 'n') {
					cnt++; i++;
				}
				else
					cnt++;
			}			
			else
				cnt++;
		}
		else {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}