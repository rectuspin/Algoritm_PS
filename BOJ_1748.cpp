#include <iostream>
#include <cmath>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int i, n, length,n_digit,tmp;

    cin >> n;
    tmp = n; n_digit = 0;
    while (tmp) {
        tmp= tmp / 10;
        n_digit++;
    }

    length = 0;
    for ( i = 1; i < n_digit; i++)  {        
        length += i * 9 * int(pow(10, i - 1));
    }
    for ( i = int(pow(10,n_digit-1)); i <= n; i++) {
        length += n_digit;
    }
    cout << length;
    return 0;
}