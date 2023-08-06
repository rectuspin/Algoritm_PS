/* https://www.acmicpc.net/problem/10844 */

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,i,j;

    long long arr[101][10];
    long long ans=0;

    cin >> n;
    for (i = 1; i <= 9; i++) {
        arr[1][i] = 1;
    }
    arr[1][0] = 0;
    for (i = 2; i <= n; i++) {
        for ( j = 0; j < 10; j++){
            if (j == 0) {
                arr[i][j] = arr[i - 1][j + 1]%1000000000;
            }
            else if (j==9) {
                arr[i][j] = arr[i - 1][j - 1]%1000000000;
            }
            else {
                arr[i][j] = (arr[i - 1][j - 1]+arr[i - 1][j + 1])%1000000000;
            }

        }
    }
    for (i = 0; i < 10; i++) {
        ans += arr[n][i];
    }
    cout << ans%1000000000;
    return 0;
}