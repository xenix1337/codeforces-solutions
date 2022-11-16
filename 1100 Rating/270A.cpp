#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		int turnAngle = 180 - a;
		if(360 % turnAngle == 0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}