#include <iostream>
#include <queue>

using namespace std;
int M, N, H; // 가로, 세로, 높이
int arr[101][101][101] = {0, };
queue<pair<int, pair<int, pair<int, int> > > >q; // 날짜, h, x, y
int dx[] = {-1, 1, 0, 0, 0, 0};
int dy[] = {0, 0, -1, 1, 0, 0};
int dz[] = {0, 0, 0, 0, -1, 1};
int day = 0;
int tomato = 0;
int notomato = 0 ;

void print() {
	cout << "=======================\n";
	for (int k = 0; k < H; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cout << arr[k][i][j] << " ";
			}
			cout << endl;
		}
	}
}

bool isVaild(int h, int x, int y) {
	if (x < 0 || y < 0 || x >= N || y >= M || h >= H || h < 0) {
		return false;
	} else if (arr[h][x][y] == 1 || arr[h][x][y] == -1) {
		return false;
	}
	return true;
}

void bfs() {
	while (!q.empty()) {
		day = q.front().first;
		int front_height = q.front().second.first;
		int front_x = q.front().second.second.first;
		int front_y = q.front().second.second.second;

		for (int i = 0; i < 6; i++) {
			int next_x = front_x + dx[i];
			int next_y = front_y + dy[i];
			int next_h = front_height + dz[i];
			if (isVaild(next_h, next_x, next_y)) {
				arr[next_h][next_x][next_y] = 1;
				q.push(make_pair(day + 1, make_pair(next_h, make_pair(next_x, next_y))));
			}
		}
		q.pop();
		tomato++;
	}
} 

int main(void) {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> M >> N >> H;
	for (int k = 0; k < H; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				int x;
				cin >> x;
				arr[k][i][j] = x;
				if (x == 1) {
					q.push(make_pair(0, make_pair(k, make_pair(i, j))));
				} else if (x == -1) {
					notomato++;
				}
			}
		}
	}

	bfs();
	// print();
	if (tomato + notomato < N * M * H) {
		cout << -1;
	} else {
		cout << day;
	}
}