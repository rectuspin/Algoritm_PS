#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int check(int size, vector<string> &vec,int start_r,int end_r,int start_c,int end_c){
	int cnt, maxNum,i,j;
	maxNum = 0;
	for ( i = start_r; i <=end_r; i++){ //check row
		cnt = 1;
		for ( j = 0; j < size-1; j++)	{
			if (vec[i][j] == vec[i][j + 1])
				cnt++;
			else cnt = 1;			
			
			if (cnt > maxNum) maxNum = cnt;
		}
	}
	for ( j = start_c; j <= end_c; j++){//check column
		cnt = 1;
		for ( i = 0; i < size-1; i++)	{
			if (vec[i][j] == vec[i + 1][j])
				cnt++;
			else cnt = 1;

			if (cnt > maxNum) maxNum = cnt;
		}
	}

	return maxNum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, i, j, cnt,maxNum;

	cin >> n;
	vector<string> board(n);

	for ( i = 0; i <n; i++){
		cin >> board[i];
	}

	maxNum = 0;
	for ( i = 0; i < n; i++) {
		for (j = 0; j < n; j++)	{
			if (j + 1 < n) {
				swap(board[i][j], board[i][j + 1]);
				cnt=check(n,board,i,i,j,j+1);
				if (cnt > maxNum)
					maxNum = cnt;
				swap(board[i][j], board[i][j + 1]);

			}

			if (i + 1 < n) {
				swap(board[i][j], board[i + 1][j]);
				cnt=check(n,board,i,i+1,j,j);
				if (cnt > maxNum)					
					maxNum = cnt;
				swap(board[i][j], board[i + 1][j]);
			}
		}
	}
	cout << maxNum;
	return 0;
}