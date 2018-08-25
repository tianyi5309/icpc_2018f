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
    
    int x, y, n;
    cin >> x >> y >> n;
    for (int i = 1; i <= n; i++) {
        if (i%x == 0 && i%y == 0) cout << "FizzBuzz" << endl;
        else if (i%x == 0) cout << "Fizz" << endl;
        else if (i%y == 0) cout << "Buzz" << endl;
        else cout << i << endl;
    }
    return 0;
}
