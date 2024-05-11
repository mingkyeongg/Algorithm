#include <iostream>
#include <map>

using namespace std;

map<int, bool> m1;
map<int, bool> m2;
int A, B;
int ans = 0;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> A >> B;
	for (int i = 0; i < A; i++) {
		int tmp;
		cin >> tmp;
		m1[tmp] = true;
	}
	for (int i = 0; i < B; i++) {
		int tmp;
		cin >> tmp;
		m2[tmp] = true;
	}
	for (auto it = m1.begin(); it != m1.end(); it++) {
		if (m2.find(it->first) == m2.end()) {
			ans++;
		}
	}
	for (auto it = m2.begin(); it != m2.end(); it++) {
		if (m1.find(it->first) == m1.end()) {
			ans++;
		}
	}
	cout << ans;
}