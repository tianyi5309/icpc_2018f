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

int main() {
//    freopen("/Users/tianyi/Downloads/jacks_candy_shop.txt", "r", stdin);
//    freopen("/Users/tianyi/Downloads/b_out.txt", "w", stdout);
    int x1;
    string s;
    while (true) {
        cin >> s;
        if (s == "END") break;
        x1 = s.size();
        if (x1 == 1 && stoi(s) == 1) {
            cout << 1 << endl;
            continue;
        }
        int xn; // newx
        for (int i = 2; i < 1000000; i++) {
            xn = to_string(x1).size();
            if (xn == x1) {
                cout << i << endl;
                break;
            }
            x1 = xn;
        }
    }
    return 0;
}




