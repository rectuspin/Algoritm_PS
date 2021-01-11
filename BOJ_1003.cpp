#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>
#include <map>
using namespace std;

typedef struct _st{
    bool isEmpty = true;
    int zero=0;
    int one=0;
}st;
vector<st> vec(41);

st fibonacci(int n) {
    if (vec[n].isEmpty) {
        if (vec[n - 2].isEmpty) {
            fibonacci(n - 1); fibonacci(n - 2);
            vec[n].zero += vec[n - 1].zero + vec[n - 2].zero;
            vec[n].one += vec[n - 1].one + vec[n - 2].one;
        }
        else {
            if (vec[n - 1].isEmpty) {
                fibonacci(n - 1);
                vec[n].zero += vec[n - 1].zero + vec[n - 2].zero;
                vec[n].one += vec[n - 1].one + vec[n - 2].one;
            }
            else {
                vec[n].zero += vec[n - 1].zero + vec[n - 2].zero;
                vec[n].one += vec[n - 1].one + vec[n - 2].one;
            }

        }
        vec[n].isEmpty = false;
    }
    
    return vec[n];
}
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
    st ans;
	int i, j, t,n;
    vec[0].isEmpty = false; vec[1].isEmpty = false;
    vec[0].zero = 1; vec[1].zero = 0;
    vec[0].one = 0; vec[1].one = 1;


    cin >> t;
	for (i = 0; i < t; i++) {
        cin >> n;
        ans=fibonacci(n);
        cout << ans.zero << " " << ans.one << "\n";
	}
    

	return 0;
}
