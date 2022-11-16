#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <climits>

using namespace std;

int binsearch(vector<int>& v, int n) {
	int a = 0;
	int b = v.size() - 1;
	while(a < b) {
		int m = (a+b)/2;
		if(v[m] <= n) {
			a = m + 1;
		} else {
			b = m;
		}
	}
	return a;
}

int main() {
	int n; cin >> n;
	vector<int> cost(n);
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		cost[i] = x;
	}

	sort(cost.begin(), cost.end());
	cost.push_back(INT_MAX);

	int q; cin >> q;
	for(int i = 0; i < q; i++) {
		int c; cin >> c;
		int pos = binsearch(cost, c);
		cout << pos << endl;
	}

	return 0;
}