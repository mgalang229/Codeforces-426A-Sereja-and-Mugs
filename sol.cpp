#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, s;
	cin >> n >> s;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the mugs of water in non-decreasing order
	sort(a.begin(), a.end());
	for (int i = 0; i < n - 1; i++) {
		// subtract the volume of the cup from the volume of mugs of water that will put in
		s -= a[i];
	}
	// check if the cup does not overfill (s is still greater than or equal to zero)
	cout << (s >= 0 ? "YES" : "NO") << '\n';
	return 0;
}
