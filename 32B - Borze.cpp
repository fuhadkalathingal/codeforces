#include <bits/stdc++.h>
using namespace std;

// '.' means 0 and '-.' means 1 and means '--'
// so we simply use conditions and vector to store decoded data

int main() {
    string borze;
    cin >> borze;

    int n = borze.size();
    vector<int> result;

    for(int i = 0; i < n; i++) {
        if(borze[i] == '.') {
            result.push_back(0);
        }else if(borze[i] == '-' && borze[i+1] == '.') {
            result.push_back(1);
            i++;
        }else{
            result.push_back(2);
            i++;
        }
    }

    for(auto it : result) {
        cout << it;
    }

    return 0;
}