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
	ll n, d; cin >> n >> d;
	vector<pair<ll, ll>> friends(n);
	for(int i = 0; i < n; i++) {
		ll a, b; cin >> a >> b;
		friends[i] = {a, b};
	}

	sort(friends.begin(), friends.end());

	ll sum = 0;
	ll maxSum = 0;
	int a = 0;
	for(int b = 1; b <= n; b++) {
		while(friends[b - 1].first - friends[a].first >= d) {
			a++;
			sum -= friends[a - 1].second;
		}

		sum += friends[b - 1].second;
		maxSum = max(sum, maxSum);
	}

	cout << maxSum << endl;
	return 0;
}