#include <iostream>

using namespace std;

int cnt[10001] = {0, };

int main(void) {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		cnt[x] += 1;
	}

	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < cnt[i]; j++) {
			cout << i << '\n';
		}
	}
}