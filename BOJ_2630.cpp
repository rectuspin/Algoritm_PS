#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int n,Bcnt,Wcnt;
vector<vector<int>> vec;

int divide(int row,int col, int a) {//a is the length of the divided square's side
	
	int i, j, check;
	bool needToDivide = false;
	if (a == 1) {
		if (vec[row][col] == 1)
			Bcnt++;
		else
			Wcnt++;
		return 0;
	}
	else {
		check = vec[row][col];
		for (i = row; i < row + a; i++) {
			for (j = col; j < col + a; j++) {
				if (vec[i][j] != check) {
					needToDivide=true;
					break;
				}
			}
			if (needToDivide)
				break;
		}
		if (needToDivide) {
			divide(row, col, a / 2);
			divide(row + (a / 2), col, a / 2);
 			divide(row, col + (a / 2), a / 2);
			divide(row + (a / 2), col + (a / 2), a / 2);
		}
		else {
			if (check == 1)
				Bcnt++;
			else
				Wcnt++;
		}
	}


	return 0;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i, j, n,tmp;
	cin >> n;
	vec.resize(n);
	for (i = 0; i <n; i++) {
		for (j = 0; j < n; j++) {
			cin >> tmp;
			vec[i].push_back(tmp);
		}
	}

	Bcnt = 0; Wcnt = 0;
	divide(0, 0, n);
	cout << Wcnt<<"\n"<<Bcnt;

	
	return 0;
}
