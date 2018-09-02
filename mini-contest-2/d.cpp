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
    int s, d;
    while (cin >> s >> d) {
        int ans = 0;
        for (int i = 0; i < (1<<12); i++) { // 1 if surplus, 0 if deficit
            // check 5 month interval < 0
            bool valid = true;
            for (int j = 0; j <= 7; j++) {
                int total = 0;
                for (int k = 0; k < 5; k++) {
                    if ((1<<(j+k)) & i) total += s;
                    else total -= d;
                }
                if (total >= 0) valid = false; 
            }
            if (!valid) continue;
            // compute total surplus
            int sum = 0;
            for (int j = 0; j < 12; j++) {
                if ((1<<j) & i) sum+=s;
                else sum -= d;
            }
            ans = max(ans, sum);
        }
        if (ans > 0) cout << ans << endl;
        else cout << "Deficit" << endl;
    }
    return 0;
}

