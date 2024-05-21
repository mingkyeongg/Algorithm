#include <iostream>
#include <vector>

using namespace std;

int N; // 수열의 크기
vector<int> A; // 수열

int binarySearch() {
	int list[N + 1];
	int pos = 0;
	list[pos] = A[0];

	for (int i = 1; i < N; i++) {
		if (list[pos] < A[i]) {
			list[pos + 1] = A[i];
			pos +=1;
		} else {
			int left = 0;
			int right = pos;
			while (left < right) {
				int mid = (left + right) / 2;
				if (list[mid] < A[i]) {
					left = mid + 1;
				} else {
					right = mid;
				}
			}
			list[right] = A[i];
		}
	}
	return pos;
}

int main(void) {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		A.push_back(x);
	}
	cout << binarySearch() + 1;
}