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
    int tc; cin >> tc;
    for (int tcn = 1; tcn <= tc; tcn++) {
        printf("Case %d: ", tcn);
        int r, c, m, n;
        cin >> r >> c >> m >> n;
        int freq[26] = {0};
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                char tmp; scanf(" %c", &tmp);
                freq[tmp-'A']++;
            }
        }
        int maxfreq = 0;
        for (int i = 0; i < 26; i++) maxfreq = max(maxfreq, freq[i]);
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == maxfreq) ans += m*freq[i];
            else ans += n*freq[i];
        }
        cout << ans << endl;
    }
    return 0;
}

