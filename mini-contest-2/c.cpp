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
    int f, r;
    while (true) {
        cin >> f; if (f == 0) break;
        cin >> r;
        int fgear[10], rgear[10];
        for (int i = 0 ; i < f; i++) cin >> fgear[i];
        for (int i = 0; i < r; i++) cin >> rgear[i];
        
        vector<double> ratios;
        for (int i = 0; i < f; i++) {
            for (int j = 0; j < r; j++) {
                ratios.push_back((double)rgear[j]/fgear[i]);
            }
        }
        sort(ratios.begin(), ratios.end());
        double maxspread = 0;
        for (int i = 0; i < ratios.size()-1; i++) {
            maxspread = max(maxspread, ratios[i+1]/ratios[i]);
        }
        printf("%.2f\n", maxspread);
    }
    return 0;
}


