#include <iostream>
#include <string>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;
	string one = "";
	string two = "ABC";
	string three = "DEF";
	string four = "GHI";
	string five = "JKL";
	string six = "MNO";
	string seven = "PQRS";
	string eight = "TUV";
	string nine = "WXYZ";
	string zero = "";

	int i, minTime;
	int dialTime[10] = { 11,2,3,4,5,6,7,8,9,10 };
	for (minTime=0,i = 0; i < str.length(); i++) {
		if (one.find(str[i]) != -1)
			minTime += dialTime[1];
		else if (two.find(str[i])!=-1)
			minTime += dialTime[2];
		else if (three.find(str[i])!=-1)
			minTime += dialTime[3];
		else if (four.find(str[i])!=-1)
			minTime += dialTime[4];
		else if (five.find(str[i])!=-1)
			minTime += dialTime[5];
		else if (six.find(str[i])!=-1)
			minTime += dialTime[6];
		else if (seven.find(str[i])!=-1)
			minTime += dialTime[7];
		else if (eight.find(str[i])!=-1)
			minTime += dialTime[8];
		else if (nine.find(str[i])!=-1)
			minTime += dialTime[9];
		else if (zero.find(str[i])!=-1)
			minTime += dialTime[0];
	}
	cout << minTime;
	return 0;
}