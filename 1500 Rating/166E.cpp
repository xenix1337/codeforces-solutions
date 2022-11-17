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
#define MOD 1000000007

using namespace std;

int main() {
	int n; cin >> n;
	ll result = 0;

	if(n == 1) {
		cout << "0" << endl;
		return 0;
	}
	
	n -= 2;

	// f(x) = 3*f(x - 2) + 2*f(x - 1)
	ll a = 1;
	ll b = 2;
	for(int i = 0; i < n; i++) {
		ll c = (3 * a + 2 * b) % MOD;
		a = b;
		b = c;
	}
	cout << (3 * a) % MOD << endl;
	return 0;
}