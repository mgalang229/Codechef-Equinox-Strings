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
		long long sarthak = 0;
		long long anuradha = 0;
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			if (s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X') {
				sarthak += a;
			} else {
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
