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
	int n, q; cin >> n >> q;

	vector<ll> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];

	int treeSize = 1;
	while(treeSize < n) treeSize *= 2;
	treeSize *= 2;

	vector<ll> tree(treeSize);
	for(int i = 0; i < q; i++) {
		int a, b; cin >> a >> b;
		a--; b--;
		a += (treeSize / 2);
		b += (treeSize / 2);
		tree[a]++;
		if(a != b) tree[b]++;
		while(a / 2 != b / 2) {
			if(a % 2 == 0) {
				tree[a + 1]++;
			}
			if(b % 2 == 1) {
				tree[b - 1]++;
			}
			a /= 2; b /= 2;
		}
	}

	vector<ll> occ(n);
	for(int i = 0; i < n; i++) {
		int j = i + treeSize / 2;
		ll o = 0;
		while(j != 0) {
			o += tree[j];
			j /= 2;
		}
		occ[i] = o;
	}

	sort(v.begin(), v.end());
	sort(occ.begin(), occ.end());
	ll sum = 0;
	for(int i = 0; i < n; i++) {
		sum += v[i] * occ[i];
	}
	cout << sum << endl;

	return 0;
}