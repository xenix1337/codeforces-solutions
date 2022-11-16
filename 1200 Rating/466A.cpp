#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int n, m, a, b; cin >> n >> m >> a >> b;
	if(a * m < b) {
		// Not worth buying special ticket
		cout << a * n << endl;
	} else {
		cout << (n / m) * b + min((n % m) * a, b) << endl;
	}
	return 0;
}