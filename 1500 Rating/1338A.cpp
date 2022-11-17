#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <iomanip>
#include <algorithm>
#include <climits>
#include <cmath>
#include <string>

#define ll long long

using namespace std;

int main() {
	int T; cin >> T;
	for(int t = 0; t < T; t++) {
		int n; cin >> n;

		ll maxDiff = 0;
		ll maximum = -99999999999;
		for(int i = 0; i < n; i++) {
			ll x; cin >> x;
			maximum = max(x, maximum);
			maxDiff = max(maxDiff, maximum - x);
		}
		int steps = 0;
		while(maxDiff > 0) {
			maxDiff /= 2;
			steps++;
		}
		cout << steps << endl;
	}

	return 0;
}