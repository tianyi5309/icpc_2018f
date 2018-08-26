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

// should but correct, but never tested since judge is down

int main() {
//    freopen("/Users/tianyi/Downloads/jacks_candy_shop.txt", "r", stdin);
//    freopen("/Users/tianyi/Downloads/b_out.txt", "w", stdout);
    int n, p;
    int rfpn = 1;
    while (true) {
        cin >> n >> p;
        if (n+p == 0) break;
        cout << "RFP #" << rfpn << endl;
        vector<string> names; // names
        vector<double> price; // price
        vector<int> reqs; // requirements
        names.assign(p, "");
        price.assign(p, 0);
        reqs.assign(p, 0);
        string tmp;
        scanf(" ");
        for (int i = 0; i < n; i++) getline(cin, tmp); // throwaway
        for (int i = 0; i < p; i++) {
            scanf(" ");
            getline(cin, names[i]);
            cin >> price[i] >> reqs[i];
            for (int j = 0; j < reqs[i]; j++) {
                scanf(" ");
                getline(cin, tmp); // throwaway
            }
        }
        
//        cout << n << " " << p << endl;
//        for (int i = 0; i < p; i++) {
//            cout << names[i] << " " << price[i] << " " << reqs[i] << endl;
//        }
        
        // Find best proposal that satisfies
        double lowestp = 1e9;
        int opt = -1;
        for (int i = 0; i < p; i++) {
            if (reqs[i] == n) {
                if (price[i] < lowestp) {
                    lowestp = price[i];
                    opt = i;
                }
            }
        }
        if (opt != -1) {
            cout << names[opt] << endl;
            cout << endl;
            continue;
        }
        
        int maxCompliance = 0;
        for (int i = 0; i < p; i++) maxCompliance = max(maxCompliance, reqs[i]);
        
        lowestp = 1e9;
        opt = -1;
        for (int i = 0; i < p; i++) {
            if (reqs[i] == maxCompliance) {
                if (price[i] < lowestp) {
                    lowestp = price[i];
                    opt = i;
                }
            }
        }
        cout << names[opt] << endl;
        cout << endl;
        
        
        
        
        rfpn++;
    }
    return 0;
}
