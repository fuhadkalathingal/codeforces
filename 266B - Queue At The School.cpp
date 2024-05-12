#include <bits/stdc++.h>
using namespace std;

//in every t secounds the boys try to overcome the girls if girl is infront of boys.
//there for in every t secounds we swap girl and boy if girl is infront of boys

int main() {
    int n, time;
    cin >> n >> time;
    string queue;
    cin >> queue;

    while(time--) {
        for(int i = 1; i < n; i++) {
            if((queue[i-1] == 'B') && (queue[i] == 'G')) {
                queue[i-1] = 'G';
                queue[i] = 'B';
                i++;
            }
        }
    }

    cout << queue;

    return 0;
}