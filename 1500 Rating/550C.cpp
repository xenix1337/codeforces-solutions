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
	string s; cin >> s;

	for(int k = 0; k < 1000; k += 8) {
		string ks = to_string(k);

		int z = 0;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == ks[z]) {
				z++;
				if(z == ks.length()) break;
			}
		}
		if(z == ks.length()) {
			cout << "YES" << endl;
			cout << ks << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}