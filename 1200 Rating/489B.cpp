#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

bool match(int a, int b) {
	return abs(a - b) <= 1;
}

int main() {
	int b, g; cin >> b;
	vector<int> boys(b);
	for(int i = 0 ; i < b; i++) cin >> boys[i];
	cin >> g;
	vector<int> girls(g);
	for(int i = 0 ; i < g; i++) cin >> girls[i];

	sort(boys.begin(), boys.end());
	sort(girls.begin(), girls.end());

	int x = 0, y = 0;
	int result = 0;
	while(x < b && y < g) {
		if(match(boys[x], girls[y])) {
			x++; y++;
			result++;
		} else {
			if(boys[x] < girls[y]) {
				x++;
			} else {
				y++;
			}
		}
	}
	cout << result << endl;
	return 0;
}