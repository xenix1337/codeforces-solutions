#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int n, l; cin >> n >> l;
	vector<int> lanterns(n);
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		lanterns[i] = a;
	}

	sort(lanterns.begin(), lanterns.end());
	int max_dist = max(lanterns[0], l - lanterns[lanterns.size() - 1]) * 2;
	for(int i = 0; i < n - 1; i++) {
		int d = (lanterns[i + 1] - lanterns[i]);
		max_dist = max(max_dist, d);
	}
	cout << fixed << setprecision(20) << max_dist / 2.0 << endl;
	return 0;
}