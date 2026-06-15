#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int n;
	long long x;
	cin >> n >> x;

	unordered_map<long long, int> pos;

	for (int i = 1; i <= n; i++) {
		long long a;
		cin >> a;

		long long need = x - a;
		if (pos.find(need) != pos.end()) {
			cout << pos[need] << " " << i << "\n";
			return 0;
		}

		if (pos.find(a) == pos.end()) {
			pos[a] = i;
		}
	}

	cout << -1 << "\n";
	return 0;
}
