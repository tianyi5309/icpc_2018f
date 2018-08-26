#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <queue>
#include <deque>
#include <set>
#include <vector>
#include <random>
#include <map>
using namespace std;

// should be correct, but never tested since judge is down
int main() {
//    freopen("/Users/tianyi/Downloads/jacks_candy_shop.txt", "r", stdin);
//    freopen("/Users/tianyi/Downloads/b_out.txt", "w", stdout);
    int tcn; cin >> tcn;
    while (tcn--) {
        scanf(" ");
        string s; getline(cin, s); // parse line
        int m = 0, f = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'M') m++;
            else if (s[i] == 'F') f++;
        }
        if (m==f && m > 1) cout << "LOOP" << endl;
        else cout << "NO LOOP" << endl;
    }
    
    return 0;
}

