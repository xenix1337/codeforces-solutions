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
	ll n; cin >> n;
	vector<int> o(10, 1);

	ll prod = 1;
	int z = 0;
	while(prod < n) {
		prod /= o[z];
		o[z]++;
		prod *= o[z];
		z++; z %= 10;
	}

	const string codeforces = "codeforces";
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < o[i]; j++) {
			cout << codeforces[i];
		}
	}
	cout << endl;
	return 0;
}