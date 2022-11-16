#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int n; cin >> n;
	vector<pair<int, int>> laptops;
	for(int i = 0; i < n; i++) {
		int p, q; cin >> p >> q;
		laptops.push_back({p, q});
	}

	sort(laptops.begin(), laptops.end());

	bool result = false;
	for(int i = 0; i < n - 1; i++) {
		if(laptops[i].first < laptops[i + 1].first && laptops[i].second > laptops[i + 1].second) {
			result = true;
			break;
		}
	}
	cout << (result ? "Happy Alex" : "Poor Alex") << endl;
	return 0;
}