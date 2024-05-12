#include <bits/stdc++.h>
using namespace std;

//To find the moves to make it center we need to check the distance of 1
//center = 3; to find distance of row to center = abs(row - 3)
//To find distance of coloumn to center = abs(coloumn - 3)
//Therefore total moves = abs(row - 3) + abs(coloumn - 3);

int main() {

    int x;
    int moves = 0;

    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            cin >> x;
            if(x == 1) {
                moves = abs(i-3) + abs(j-3); // the abs means distance of that value from 0
            }
        }
    }

    cout << moves << endl;

    return 0;
}