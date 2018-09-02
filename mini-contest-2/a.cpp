#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <queue>
#include <deque>
#include <set>
#include <array>
#include <vector>
#include <list>
#include <bitset>
#include <random>
#include <map>
using namespace std;

int main() {
//    freopen("/Users/tianyi/Downloads/in.txt", "r", stdin);
//    freopen("/Users/tianyi/Downloads/b_out.txt", "w", stdout);
    int n;
    int a[3005];
    while (cin >> n) {
        for (int i = 0; i < n; i++) cin >> a[i];
        bitset<3005> used;
        int count = 0;
        for (int i = 0; i < n-1; i++) {
            int diff = abs(a[i+1] - a[i]);
            if (1 <= diff && diff <= n-1 && !used[diff]) {
                used[diff] = true;
                count++;
            }
        }
        if (count == n-1) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
    return 0;
}

