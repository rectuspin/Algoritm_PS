#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int i, t,m,n,x,y,k;
    bool exist;
    cin >> t;
    for ( i = 0; i < t; i++) {
        exist = false;
        cin >> m >> n >> x >> y;
        x--; y--;
        for ( k =x; k <m*n; k+=m){
            if (k % n == y) {
                cout << k+1 << '\n';
                exist = true;
                break;
            }
        }
        if (!exist)
            cout << -1 << '\n';
    }

    return 0;
}