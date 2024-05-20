#include <iostream>
#include <vector>

using namespace std;

int N; // 수열의 크기
vector<int> A; // 수열

void print(int *dp) {
	for (int i = 0; i < N; i++) {
		cout << dp[i] << ' ';
	}
	cout << '\n';
}

int main(void) {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		A.push_back(num);
	}
	int dp[N];
	dp[0] = 1;
	for (int i = 0; i < N; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	int dp2[N];
	for (int i = N - 1; i >= 0; i--) {
		dp2[i] = 1;
		for (int j = N - 1; j > i; j--) {
			if (A[i] > A[j]) {
				dp2[i] = max(dp2[i], dp2[j] + 1);
			}
		}
	}
	int dp_bitonic[N];
	for (int i = 0; i < N; i++) {
		dp_bitonic[i] = dp[i] + dp2[i] - 1;
	}

	// print(dp);
	// print(dp2);
	// print(dp_bitonic);
	int max_val = 0;
	for (int i = 0; i < N; i++) {
		if (dp_bitonic[i] > max_val) {
			max_val = dp_bitonic[i];
		}
	}
	cout << max_val << '\n';
}