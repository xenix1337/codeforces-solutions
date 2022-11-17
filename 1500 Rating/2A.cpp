#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <iomanip>
#include <algorithm>
#include <climits>
#include <cmath>

#define ll long long

using namespace std;

int main() {
	int n; cin >> n;

	map<string, int> points;
	vector<pair<string, int>> ranking;

	for(int i = 0; i < n; i++) {
		string name; int p;
		cin >> name >> p;

		if(points.find(name) == points.end()) points[name] = 0;
		points[name] += p;

		ranking.push_back({name, points[name]});
	}

	int maxVal = -1000000;
	for(auto p : points) {
		if(p.second > maxVal) maxVal = p.second;
	}

	for(int i = 0; i < n; i++) {
		if(ranking[i].second >= maxVal && points[ranking[i].first] == maxVal) {
			cout << ranking[i].first << endl;
			break;
		}
	}

	return 0;
}