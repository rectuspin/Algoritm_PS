#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int numTest, height, numRoomPerFlr, nthGuest, roomNum,i,floor;
	cin >> numTest;
	for (i = 0; i < numTest; i++) {
		cin >> height >> numRoomPerFlr >> nthGuest;
		
		if (nthGuest % height != 0) {
			floor = nthGuest % height;
			roomNum = floor * 100 + (nthGuest / height) + 1;		
		}
		else {
			floor = height;
			roomNum = floor * 100 + (nthGuest / height);
		}
		cout << roomNum<<"\n";
	}
	return 0;
}