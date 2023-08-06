#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> vec;
bool comp(int a,int b) {
	return a > b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i,j,N,tmp;
	
	cin >> N;
	for ( i = 0; i < N; i++){
		cin >> tmp;		
		if (tmp == 0) {
			if (vec.empty())
				cout << 0<<"\n";
			else {
				pop_heap(vec.begin(), vec.end(),comp);
				cout << vec.back() << "\n";
				vec.pop_back();
			}

		}
		else {
			vec.push_back(tmp);
			if (vec.size() == 1)
				make_heap(vec.begin(), vec.end(), comp);
			push_heap(vec.begin(), vec.end(),comp);
		}
		//if (vec.size()>1)
		//	sort_heap(vec.begin(), vec.end());
	}

	return 0;
}