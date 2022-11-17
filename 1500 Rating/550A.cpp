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
	string s; cin >> s;
	vector<int> ab, ba;

	for(int i = 0; i < s.length() - 1; i++) {
		if(s[i] == 'A' && s[i + 1] == 'B') ab.push_back(i);
		if(s[i] == 'B' && s[i + 1] == 'A') ba.push_back(i);
	}

	for(int i = 0; i < ab.size(); i++) {
		for(int j = 0; j < ba.size(); j++) {
			if(abs(ab[i] - ba[j]) >= 2) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}