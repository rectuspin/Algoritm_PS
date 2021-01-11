#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char board[51][51];
int n, m, i, j, k,l, minNum=0;

int bchess() {
	int miss,count;

	char bchess[9][9] = { "BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB" };
	miss = 99999; count = 0;

	for (k = 0; k < m - 7; k++) {
		for (l = 0; l < n - 7; l++) {
			for (i = l; i <l+ 8; i++) {
				for (j = k; j < k+8; j++) {
					if (board[i][j] != bchess[i-l][j-k])
						count++;
				}
			}
			miss=min(miss, count);
			count = 0;

		}
	}

	return miss;
}

int wchess() {
	int miss,count;
	
	char wchess[9][9] = { "WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW" };
	miss = 99999; count = 0;
	for (k = 0; k < m - 7; k++) {
		for (l = 0; l < n - 7; l++) {
			for (i = l; i <l+ 8; i++) {
				for (j = k; j < k+8; j++) {
					if (board[i][j] != wchess[i-l][j-k])
						count++;
				}
			}
			miss=min(miss, count);
			count = 0;
		}
	}
	return miss;
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	minNum = min(bchess(), wchess());
	cout << minNum;


	return 0;
}
