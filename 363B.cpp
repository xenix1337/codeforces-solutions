#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<int> h(n);
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		h[i] = x;
	}

	int sum = 0;
	for(int i = 0; i < k; i++) {
		sum += h[i];
	}
	int min_sum = sum;
	int min_index = 0;

	for(int a = 1; a+k <= n; a++) {
		sum -= h[a - 1];
		sum += h[a + k - 1];
		if(sum < min_sum) {
			min_sum = sum;
			min_index = a;
		}
	}
	cout << min_index + 1 << endl;

	return 0;
}