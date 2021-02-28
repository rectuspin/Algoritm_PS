#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int max_num, min_num, n,i,tmp;
	cin >> n;
	min_num = 1000000;
	max_num = -1;
	for ( i = 0; i < n; i++){
		cin >> tmp;
		if (tmp > max_num)
			max_num=tmp;
		if(tmp<min_num)
			min_num=tmp;
	}
	cout << max_num * min_num;
	return 0;
}