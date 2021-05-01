#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, a, b;
		cin >> n >> a >> b;
		vector<string> s(n);
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		// use 'long long' data type
		long long sarthak = 0;
		long long anuradha = 0;
		// create a string for the comparison of the first character
		string word = "EQUINOX";
		for (int i = 0; i < n; i++) {
			if (word.find((char) s[i][0]) != string::npos) {
				// if the first letter of the string matches one of the letters in the 'word',
				// then, increase 'sarthak' by 'a'
				sarthak += a;
			} else {
				// otherwise, increase 'anuradha' by 'b'
				anuradha += b;
			}
		}
		if (sarthak > anuradha) {
			cout << "SARTHAK";
		} else if (anuradha > sarthak) {
			cout << "ANURADHA";
		} else {
			cout << "DRAW";
		}
		cout << '\n';
	}
	return 0;
}
