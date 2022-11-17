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

int m;

int dfs(vector<vector<int>>& conn, vector<int>& cats, int v, int prev, int catsMet) {
	if(cats[v]) catsMet++;
	else catsMet = 0;

	if(catsMet > m) return 0;
	if(v != 0 && conn[v].size() == 1) return 1;

	int sum = 0;
	for(auto child : conn[v]) {
		if(child == prev) continue;
		sum += dfs(conn, cats, child, v, catsMet);
	}
	return sum;
}

int main() {
	int n; cin >> n >> m;

	vector<int> cats(n);
	for(int i = 0; i < n; i++) cin >> cats[i];

	vector<vector<int>> conn(n);
	for(int i = 0; i < n - 1; i++) {
		int a, b; cin >> a >> b;
		a--; b--;
		conn[a].push_back(b);
		conn[b].push_back(a);
	}

	cout << dfs(conn, cats, 0, -1, 0) << endl;

	return 0;
}