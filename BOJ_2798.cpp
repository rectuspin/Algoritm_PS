#include <iostream>
#include <vector>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int max, numCard, i, j,k,tmp,closestSum;
	cin >> numCard >> max ;
	vector<int> vec(numCard),ans(3);
	
	for (i = 0; i < numCard; i++) {
		cin >> vec[i];
	}
	tmp = 0; closestSum = 0;
	for (i = 0; i < numCard-2; i++) {
		tmp += vec[i];
		for (j = i + 1; j < numCard - 1;j++) {
			tmp += vec[j];
			for (k = j + 1; k < numCard;k++) {
				tmp += vec[k];
				if (tmp <= max && tmp > closestSum) {
					closestSum = tmp;/*
					ans[0] = vec[i];
					ans[1] = vec[j];
					ans[2] = vec[k];*/
				}
				tmp -=vec[k];
			}
			tmp -= vec[j];
		}
		tmp -= vec[i];
	}

	//for(i=0;i<3;i++) cout << ans[i] <<" ";
	cout << closestSum;
	return 0;
}
