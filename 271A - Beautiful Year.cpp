#include <bits/stdc++.h>
using namespace std;

int main() {
    int year;
    cin >> year;

    while(true) {
        year += 1; //incrementing the year(year should be greater than input year)

        int a = year/1000; //first digit
        int b = year/100 % 10; //secound digit
        int c = year/10 % 10; //third digit
        int d = year % 10; // fourth digit
        
        if(a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << year;
            return 0; //making it false to break the loop
        }
    }

    return 0;
}