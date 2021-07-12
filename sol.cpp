#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n1, n2, m;
		cin >> n1 >> n2 >> m;
		// compute the sum of numbers from 1 to 'n' (unique numbers that will be used to
		// subtract in every turn to minimize the sum of 'n1' and 'n2'
		m = (m * (m + 1)) / 2;
		// find the mininum value to be subtracted from 'n1' and 'n2' (overall)
		long long mn = min({n1, n2, m});
		cout << (n1 - mn) + (n2 - mn) << '\n';
	}
	return 0;
}
