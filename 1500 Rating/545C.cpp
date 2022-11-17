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
	int n; cin >> n;
	vector<pair<int, int>> trees(n);
	for(int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		trees[i] = {a, b};
	}

	int fallenTrees = 1; // First falls to the left
	for(int i = 1; i < n; i++) {
		if(trees[i].first - trees[i].second > trees[i - 1].first) {
			// Can fall to the left
			fallenTrees++;
		} else if(i == n - 1 || trees[i].first + trees[i].second < trees[i + 1].first) {
			// Can fall to the right
			fallenTrees++;
			//Virtually move this tree to right
			trees[i].first += trees[i].second;
		}
	}
	cout << fallenTrees << endl;

	return 0;
}