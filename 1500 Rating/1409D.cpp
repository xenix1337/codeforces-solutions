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

ll digitSum(ll n) {
	ll sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int digit(ll n, int digit) {
	for(int i = 0; i < digit; i++) {
		n /= 10;
	}
	return n % 10;
}

ll pow10(int n) {
	ll r = 1;
	for(int i = 0; i < n; i++) {
		r *= 10;
	}
	return r;
}

int main() {
	int T; cin >> T;
	for(int t = 0; t < T; t++) {
		ll n; int s; cin >> n >> s;

		int sum = digitSum(n);
		if(sum <= s) {
			cout << "0" << endl;
			continue;
		}

		ll result = 0;
		for(int i = 0; i < 19; i++) {
			sum = digitSum(n);
			if(sum <= s) break;

			ll cost = pow10(i) * (10 - digit(n, i));

			result += cost;
			n += cost;
		}
		cout << result << endl;
	}
	return 0;
}