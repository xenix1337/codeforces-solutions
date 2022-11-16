#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n; cin >> n;
	int groupSizes[4] = {0};
	for(int i = 0; i < n; i++) {
		int s; cin >> s;
		groupSizes[s - 1]++;
	}

	int sum = 0;
	sum += groupSizes[3];
	int threePlusOne = min(groupSizes[2], groupSizes[0]);
	sum += threePlusOne;
	groupSizes[2] -= threePlusOne;
	groupSizes[0] -= threePlusOne;
	sum += groupSizes[2];
	int twoPlusTwo = groupSizes[1] / 2;
	groupSizes[1] %= 2;
	sum += twoPlusTwo;
	int ones = groupSizes[0] / 4;
	sum += ones;
	groupSizes[0] %= 4;
	sum += (groupSizes[0] + groupSizes[1] * 2 + 3) / 4;

	cout << sum << endl;
	return 0;
}