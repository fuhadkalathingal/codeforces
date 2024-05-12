#include <bits/stdc++.h>
using namespace std;

//A body is in equilibruim means there is no external force acting on it
// That means the x, y, z should be equals to zero

int main() {
    int n, x, y, z, xsum(0), ysum(0), zsum(0);
    cin >> n;

    while(n--) {
        cin >> x >> y >> z;

        xsum += x;
        ysum += y;
        zsum += z;
    }

    if(xsum == 0 && ysum == 0 && zsum == 0) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}