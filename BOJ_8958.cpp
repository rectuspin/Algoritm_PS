#include <iostream>
#include <string>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i, j,numTest,count,score;
	string str;

	cin >> numTest;
	for (i = 0; i < numTest; i++){
		cin >> str;
		
		for (j = 0,count=1,score=0; str[j] != NULL; j++) {
			if (str[j] == 'O') {
				score += count++;
			}
			else {
				count = 1;
			}
		}
		cout << score << "\n";
	}

	return 0;
}
