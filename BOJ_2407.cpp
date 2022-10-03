/*The result is too big even for 'long long' data type. Use string*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string arr[101][101] = {""};

string  stringAdd(string n1, string n2)
{
	int i, j, c;

	if(n1.size() < n2.size())
		swap(n1, n2);
	for(j = n1.size()-1, i=n2.size()-1; i>=0; i--, j--)
		n1[j]+=(n2[i]-'0');

	for(int i=n1.size()-1; i>0; i--){
		if(n1[i] > '9')	{
			c = n1[i]-'0';
			n1[i-1] = ((n1[i-1]-'0') + c/10) + '0';
			n1[i] = (c%10)+'0';
		}
	}	
	//first digit is bigger than 9
	if(n1[0] > '9')	{
		string tmp;
		tmp+=n1[0];
		n1[0] = ((n1[0]-'0')%10)+'0';
		tmp[0] = ((tmp[0]-'0')/10)+'0';
		n1 = tmp+n1;
	}
	return n1;
}

string DP(int n,int m) {
	if (m == 0 || n == m)
		return "1";

	if (arr[n][m] != "")
		return arr[n][m];
	else {
		arr[n][m] = stringAdd(DP(n - 1, m - 1), DP(n - 1, m));
		return arr[n][m];
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n,m;
	cin >> n >> m;
	
	cout << DP(n, m);
	return 0;
}

