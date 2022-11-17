#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <climits>
#include <cmath>

#define ll long long

using namespace std;

ll dyn(ll k[100001]) {
	ll d[100004] = {0};
	for(int i = 99999; i >= 0; i--) {
		d[i] = max(d[i + 2] + (i+1)*k[i], d[i + 3] + (i+2)*k[i+1]);
	}
	return d[0];
}

int main() {
	int n; cin >> n;
	ll k[100001] = {0};
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		k[x - 1]++;
	}

	cout << dyn(k) << endl;
	return 0;
}