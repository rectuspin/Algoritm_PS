#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int i, n, x, t;

	cin >> n >> x;
	
	for ( i = 0; i < n; i++){
		cin >> t;
		if (t < x)
			cout << t<<" ";
	}


	return 0;

}